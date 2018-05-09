import pygame as pg
class block:
    def __init__(self, coords, image):
        self.coords=coords
        self.inter=self.coords.copy()
        self.image=image
        self.size=(32, 32)
        self.rect=image.get_rect()
        self.rect.x=coords[0]
        self.rect.y=coords[1]

    def intersects(self, obj):
        qwerty=[False, False, False, False]
        """intx =  obj.coords[0]+obj.size[0] > self.coords[0] and obj.coords[0]+obj.size[0] < self.coords[0]+self.size[0] or \
                       obj.coords[0] > self.coords[0] and obj.coords[0] < self.coords[0]+self.size[0]
        inty =  obj.coords[1]+obj.size[1] > self.coords[1] and obj.coords[1]+obj.size[1] < self.coords[1]+self.size[1] or \
                       obj.coords[1] > self.coords[1] and obj.coords[1] < self.coords[1]+self.size[1]"""
        if obj.coords[0]+obj.size[0] > self.inter[0] and obj.coords[0]+obj.size[0] < self.inter[0]+self.size[0]:
            if obj.coords[1]+obj.size[1] > self.inter[1] and obj.coords[1]+obj.size[1] < self.inter[1]+self.size[1] or \
                       obj.coords[1] >= self.inter[1] and obj.coords[1] < self.inter[1]+self.size[1]:
                qwerty[0]=True
            elif obj.coords[1]<=self.inter[1] and obj.coords[1]+obj.size[1]>=self.inter[1]+self.size[1]:
                qwerty[0]=True
        if obj.coords[0] > self.inter[0] and obj.coords[0] < self.inter[0]+self.size[0]:
            if obj.coords[1]+obj.size[1] > self.inter[1] and obj.coords[1]+obj.size[1] < self.inter[1]+self.size[1] or \
                       obj.coords[1] >= self.inter[1] and obj.coords[1] < self.inter[1]+self.size[1]:
                qwerty[1]=True
            elif obj.coords[1]<self.inter[1] and obj.coords[1]+obj.size[1]>self.inter[1]+self.size[1]:
                qwerty[1]=True
        if obj.coords[1]+obj.size[1] >= self.inter[1] and obj.coords[1]+obj.size[1] < self.inter[1]+self.size[1]:
            if obj.coords[0]+obj.size[0] > self.inter[0] and obj.coords[0]+obj.size[0] <= self.inter[0]+self.size[0] or \
                       obj.coords[0] >= self.inter[0] and obj.coords[0] < self.inter[0]+self.size[0]:
                qwerty[2]=True
            elif obj.coords[0]<self.inter[0] and obj.coords[0]+obj.size[0]>self.inter[0]+self.size[0]:
                qwerty[2]=True
        if obj.coords[1] > self.inter[1] and obj.coords[1] < self.inter[1]+self.size[1]:
            if obj.coords[0]+obj.size[0] > self.inter[0] and obj.coords[0]+obj.size[0] <= self.inter[0]+self.size[0] or \
                       obj.coords[0] >= self.inter[0] and obj.coords[0] < self.inter[0]+self.size[0]:
                qwerty[3]=True
            elif obj.coords[0]<self.inter[0] and obj.coords[0]+obj.size[0]>self.inter[0]+self.size[0]:
                qwerty[3]=True
        return qwerty
    
    def draw(self, screen, coords2):
        qwerty=self.coords.copy()
        qwerty[0]=self.coords[0]-coords2[0]
        qwerty[1]=self.coords[1]-coords2[1]
        self.inter=qwerty.copy()
        screen.blit(self.image, qwerty)

class dieBlock(block):
    def __init__(self, coords, image):
        super().__init__(coords, image)

    def collideHero(self, hero, coords2):
        qwerty=self.rect.copy()
        qwerty.x-=coords2[0]
        qwerty.y-=coords2[1]
        if qwerty.colliderect(hero.rect):
            return True

class portal(block):
    def __init__(self, coords, image):
        super().__init__(coords, image)
        self.size=(64, 64)

    def collideHero(self, hero, coords2):
        qwerty=self.rect.copy()
        qwerty.x-=coords2[0]
        qwerty.y-=coords2[1]
        if qwerty.colliderect(hero.rect):
            return True
            
