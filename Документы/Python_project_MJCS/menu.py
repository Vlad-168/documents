import pygame as pg
import sys
import button
class menu:
    def __init__(self, z):
        self.b=[button.Button("Quit", [350, 300]), button.Button("Resume", [318, 200])]
        

    def update(self, screen, hero):
        if hero.xvel!=0:
            hero.xvel=0
        flag=False
        end=False
        end2=False
        screen.fill((255, 255, 255))
        for o in self.b:
            o.draw(screen)
        pg.display.flip()
        while True:
            for event in pg.event.get():
                if event.type == pg.QUIT: 
                    pg.quit()
                    sys.exit()
                if event.type == pg.MOUSEBUTTONDOWN:
                    for o in self.b:
                        if o.isHovered(pg.mouse.get_pos()):
                            flag=o.text
                if event.type == pg.KEYDOWN:
                    if event.key==pg.K_1:
                        end=True
                        
                if flag=="Quit":
                    pg.quit()
                    sys.exit()
                if flag=="Resume":
                    end=True
                
                if end:
                    end2=True
                    break
            if end2:
                print("Hey")
                break
