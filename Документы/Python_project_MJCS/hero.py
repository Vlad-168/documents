import pygame as pg
ssize=(800, 640)
FPS=25
class hero:
    def __init__(self, x, y, image):
        self.xvel = 0
        self.yvel = 0
        self.coords=[x, y]
        self.speed=[800, 6.0, 2]
        self.size=(64, 64)
        self.stand=False
        self.image=image
        self.frame = 0
        self.frame_max = 10
        self.time = 0
        self.duration = 0.3/self.frame_max
        self.images = [0]*self.frame_max
        for i in range(self.frame_max):
            self.images[i] = self.image.subsurface((self.size[0]*i, 0), self.size)
        self.lastFrame=[self.images[self.frame], self.coords]
        self.rect=self.images[self.frame].get_rect()
        self.rect.x=self.coords[0]
        self.rect.y=self.coords[1]

    def key_down_handler(self, key):
        if key == pg.K_LEFT:
            self.xvel-=self.speed[0]
        if key == pg.K_RIGHT: 
            self.xvel+=self.speed[0]
        if key == pg.K_UP and self.stand: 
            self.yvel= -self.speed[1]
            self.stand=False

    def key_up_handler(self, key):
        if key == pg.K_LEFT:
            self.xvel+=self.speed[0]
        if key == pg.K_RIGHT:
            self.xvel-=self.speed[0]

    def outOfScreen(self, coords2):
        qwerty=[False, False, False, False]
        if self.coords[0]<0:
            qwerty[0]=True
        if self.coords[0]+self.size[0]>ssize[0]:
            qwerty[1]=True
        if self.coords[1]+self.size[1]>ssize[1]:
        
            qwerty[2]=True
        if self.coords[1]<0:
            qwerty[3]=True
        return qwerty

    def update(self):
        if(self.xvel!=0):
            self.frame = int(self.time/self.duration)
            self.time += 1/FPS
        dt=1/FPS
        self.coords[0] += self.xvel*dt
        if not self.stand:
            self.coords[1] += (self.yvel+9.8*dt)
            self.yvel+=dt*20
        self.rect.x=round(self.coords[0])
        self.rect.y=round(self.coords[1])
   
    def draw(self, screen):
        
        if self.frame >= self.frame_max:
            self.time=0
            self.frame=0
        if(self.xvel<0):
            self.lastFrame=[self.images[self.frame], self.coords]
        if(self.xvel>0):
            self.lastFrame=[pg.transform.flip(self.images[self.frame], True, False), self.coords]
        screen.blit(self.lastFrame[0], self.lastFrame[1])
