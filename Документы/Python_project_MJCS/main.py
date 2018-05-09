import pygame as pg
import sys
import hero
import block
import enemy
import menu
from button import *

def looser():
    LOSE_SOUND.play()
    screen.fill((255, 255, 255))
    button1.draw(screen)
    pg.display.flip()
    pg.time.wait(5000)
    pg.quit()
    sys.exit()

def winner():
    WIN_SOUND.play()
    screen.fill((255, 255, 255))
    button2.draw(screen)
    pg.display.flip()
    pg.time.wait(5000)
    pg.quit()
    sys.exit()

class camera:
    def __init__(self, coords, size):
        self.coords=coords
        self.size=size
        self.rect=pg.Rect(coords, size)

    def update(self, hero):
        if(hero.coords[0]+hero.size[0]>=0.75*ssize[0] and hero.xvel>0 and self.coords[0]+self.size[0]<WIN_WIDTH):
            self.coords[0] += hero.xvel/FPS
            hero.coords[0] -= hero.xvel/FPS
            
        if(hero.coords[0]<=0.25*ssize[0] and hero.xvel<0 and self.coords[0]>0):
            self.coords[0] += hero.xvel/FPS
            hero.coords[0] -= hero.xvel/FPS
            
        if(hero.coords[1]+hero.size[1]>=0.75*ssize[1] and self.coords[1]+self.size[1]<WIN_HEIGHT):
            self.coords[1] += hero.yvel
            hero.coords[1] -= hero.yvel
            
        if(hero.coords[1]<=0.25*ssize[0] and self.coords[1]>0):
            
            self.coords[1] -= 4
            hero.coords[1] += 4
        
        self.rect.x=round(self.coords[0])
        self.rect.y=round(self.coords[1])

class ObjectsHolder:
    def __init__(self):
        self.blocks = []
        self.dieBlocks = []
        self.enemyes = []
        self.hero=0
        self.portal=0
        self.camera=camera([0, 0], ssize)
    def append(self, obj):
        if type(obj) == block.block:
            self.blocks.append(obj)
        if type(obj) == block.portal:
            self.portal=obj
        if type(obj) == block.dieBlock:
            self.dieBlocks.append(obj)
        if type(obj) == enemy.enemy:
            self.enemyes.append(obj)


    def update(self):
        self.hero.update()
        self.camera.update(self.hero)
        for i in self.dieBlocks:
            if i.collideHero(self.hero, self.camera.coords):
                looser()
        for i in self.enemyes:
            i.update(self.blocks)
            if i.collideHero(self.hero, self.camera.coords):
                looser()
        if self.portal.collideHero(self.hero, self.camera.coords):
            winner()
        flag=0
        for i in range(len(self.blocks)-1, -1, -1):
            per=self.blocks[i].intersects(self.hero)
            if per[2] and not self.hero.yvel<0:
                flag+=1
                self.hero.stand=True
                self.hero.coords[1]=self.blocks[i].inter[1]-self.hero.size[1]+1
                self.hero.yvel=0
            elif per[3] and self.hero.yvel<0:
                flag+=1
                self.hero.coords[1]=self.blocks[i].inter[1]+self.blocks[i].size[1]
                self.hero.yvel=0
            elif per[0]:
                flag+=1
                self.hero.coords[0]=self.blocks[i].inter[0]-self.hero.size[0]
            elif per[1]:
                flag+=1
                self.hero.coords[0]=self.blocks[i].inter[0]+self.blocks[i].size[0]
            
            
            
        if flag==0:
            self.hero.stand=False
        per=self.hero.outOfScreen(self.camera.coords)
        if(per[0]):
            self.hero.coords[0]=0
        if(per[1]):
            self.hero.coords[0]=ssize[0]-self.hero.size[0]
        if(per[2]):
            self.hero.coords[1]=ssize[1]-self.hero.size[1]+1
            self.hero.stand=True
        if(per[3]):
            self.hero.coords[1]=0
            self.hero.yvel=0
        
    def draw(self, screen):
        for o in self.enemyes:
            if(self.camera.rect.colliderect(o.rect)):
                o.draw(screen, self.camera.coords)
        for o in self.blocks:
            if(self.camera.rect.colliderect(o.rect)):
                o.draw(screen, self.camera.coords)
        for o in self.dieBlocks:
            if(self.camera.rect.colliderect(o.rect)):
                o.draw(screen, self.camera.coords)
        self.hero.draw(screen)
        self.portal.draw(screen, self.camera.coords)

FPS=100
pg.init()
ssize=(800, 640)
block_size=32
screen = pg.display.set_mode(ssize)
timer = pg.time.Clock()
myfont = pg.font.SysFont("Arial", 15)
button = Button("New Game", (310, 300))
button1 = Button("You loose", (310, 250))
button2 = Button("You win", (310, 300))
button3 = Button("Restart", (310, 300))
z=True
menu=menu.menu(z)
WIN_SOUND = pg.mixer.Sound("music/win.wav")
LOSE_SOUND = pg.mixer.Sound("music/lose.wav")
bat = [pg.image.load("pictures/0.png"), pg.image.load("pictures/1.png"), pg.image.load("pictures/2.png"), pg.image.load("pictures/3.png"), pg.image.load("pictures/4.png"), pg.image.load("pictures/5.png")]
animation = [pg.image.load("pictures/walkingdead.png"), pg.image.load("pictures/block.png"), pg.image.load("pictures/dieBlock.png"), pg.image.load("pictures/portal.png")]
animation[0] = pg.transform.scale(animation[0], (64*10, 64))
animation[1] = pg.transform.scale(animation[1], (32,32))
animation[2] = pg.transform.scale(animation[2], (32,32))
animation[3] = pg.transform.scale(animation[3], (64,64))
objects=ObjectsHolder()
level = [
       "                                                  --------        -------                               -----------     --------------      -----------------    -----------------------------------------------------------------------------",
       "                     #  --                -----   --------        -------                               -----------                         -----------------    -----------------------------------------------------------------------------",
       "         *                                        --------        -------                               -----------                         -----------------    -------                                                                  ----",
       "    #                                             --------        -------   ----------------            -----------     --------------      -----------------    -------                                                                  ----",
       "                                  ---             --------        -------   ----------------            -----------     --------------      -----------------    -------   -----------------------------------------------------------    ----",
       "             --                                   --------        -------   ----------------            -----------     --------------      -----------------    -------   -----------------------------------------------------------    ----",
       " --                                               --------        -------   ----------------            -----------     --------------      -----------------    -------   -----------------------------------------------------------    ----",
       "                                      -----       --------        -------   ----------------            -----------     --------------      -----------------    -------   -----------------------------------------------------------    ----",
       "                    ----     ---                  --------        -------   ----------------            -----------     --------------      -----------------    -------   -----                                                          ----",
       "             #                                    --------        -------   ----------------            -----------     --------------      -----------------    -------   -----                                                          ----",
       " ----                                             --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     --------     --------------------------------------------",
       "             *                   #                --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     --------     --------------------------------------------",
       "    ^                   --------                  --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     --------     --------------------------------------------",
       "                                                  --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     --------     ------                               -------",
       "                   #                      -----   --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     --------     ------                               -------",
       "   *   ---           ----   *                     --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     --------     ------    -----------------------    -------",
       "                                                  --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     --------     ------    -----------------------    -------",
       "    -------     -----                             --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     --------     ------    -----------------------    -------",
       "                                    --------      --------        -------   ----------------            -----------     --------------      -----------------              -----     --------     ------    -----------------------    -------",
       "                         -                        --------        -------   ----------------            -----------     --------------      -----------------              -----     --------     ------    -----------------------    -------",
       "                             --                   --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     --------     ------    -----------------------    -------",
       "        ***                                       --------        -------   ----------------                            --------------      -----------------    -------   -----     --------     ------                      -----           ",
       "        ***                                       --------        -------   ----------------                            --------------      -----------------    -------   -----     --------     ------                      -----        $  ",
       "    -------     -----                             --------        -------   ----------------                            --------------      -----------------    -------   -----     --------     ------    --------------    -----           ",
       "        ***                                       --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     --------     ------    --------------    -----    -------",
       "    -------     -----                             --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     --------*****------    --------------    -----    -------",
       "        ***                                       --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     --------     ------    --------------    -----    -------",
       "    -------     -----                             --------        -------   ----------------            -----------     --------------      -----------------    -------   -----     -------------------    --------------    -----    -------",
       "        ***                                       --------        -------   ----------------            -----------     --------------      -----------------    -------   -----                            --------------    -----    -------",
       "    -------     -----                             --------        -------   ----------------            -----------     --------------      -----------------    -------   -----                            --------------    -----    -------",
       "        ***                                       --------        -------   ----------------            -----------     --------------      -----------------    -------   -----------------------------------------------****-----    -------",
       "    -------     -----                             --------        -------   ----------------            -----------             -           -----------------    -------                    ------------------------------    -----    -------",
       "        ***                                       --------        -------   ----------------            -----------             -           -----------------    -------                    ---------------------------------------    -------",
       "    -------     -----                                                       ----------------            -----------             -           -----------------    -------   --------------   ---------------------------------------    -------",
       "        ***                                                                 ----------------            -----------     --------------      -----------------    --        --------------   ---------------------------------------    -------",
       "    -------     -----                                             -------   ----------------            -----------     --------------                           --        --------------                                                    -",
       "        ***                                       --------        -------   ----------------            -----------     --------------                           ------------------------                                                    -",
       "----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------",]
WIN_WIDTH = len(level[0])*block_size
WIN_HEIGHT = len(level)*block_size
print(WIN_WIDTH, WIN_HEIGHT)
coordscam=[0, 0]
x=y=0
flag=False
while True:
    screen.fill((255, 255, 255))
    button.draw(screen)
    pg.display.flip() 
    for event in pg.event.get():
        if event.type == pg.QUIT: 
            pg.quit()
            sys.exit()
        if event.type == pg.MOUSEBUTTONDOWN:
            flag=button.isHovered(pg.mouse.get_pos())
    if flag:
        break
    
for row in level:
    for col in row:
        if col == "-":
            objects.append(block.block([x, y], animation[1]))
        if col == "#":
            objects.append(enemy.enemy(x, y, 2, 3, 150, 30, bat))
        if col == "$":
            objects.append(block.portal([x, y], animation[3]))
        if col == "*":
            objects.append(block.dieBlock([x, y], animation[2]))
        if col == "^":
            
            coordscam=[0, y-(ssize[1]/2)]
            print(x-coordscam[0], y-coordscam[1])
            objects.hero=hero.hero(x, y, animation[0])
            
        x += block_size
    y += block_size
    x = 0
objects.camera=camera(coordscam, ssize)
objects.hero.coords[1]-=objects.camera.coords[1]

while True: 
    for event in pg.event.get():
        if event.type == pg.QUIT: 
            pg.quit()
            sys.exit()
        if event.type == pg.KEYDOWN:
            objects.hero.key_down_handler(event.key)
            if event.key == pg.K_1:
                print("nfejrknjk")
                if z:
                    z=False
                else:
                    x=True
        if event.type == pg.KEYUP:
            objects.hero.key_up_handler(event.key)
            
    if not z:
        menu.update(screen, objects.hero)
        z=True
    if z:
        screen.fill((180, 180, 125))
        objects.update()
        objects.draw(screen)
    pg.display.flip() 
    timer.tick(FPS)
