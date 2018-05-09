import pygame as pg
pg.init()
myfont = pg.font.SysFont("Arial", 50)
class Button:
    def __init__(self, text, coords):
        self.coords=coords
        self.text=text
        self.render=myfont.render(text, True, (0, 0, 0))
        self.rect=self.render.get_rect()
    def isHovered(self, obj):
        if obj[0]>self.coords[0] and obj[0]<self.coords[0]+self.rect.width and \
               obj[1]>self.coords[1] and obj[1]<self.coords[1]+self.rect.height:
            return True
    def draw(self, screen):
        screen.blit(self.render, self.coords)            
