import pygame as pg
FPS=100
class enemy():
    def __init__(self, x, y, left, up, maxLengthLeft,maxLengthUp, images):
        self.size=32
        self.rect = pg.Rect(x, y, self.size, self.size)
        self.startX = x
        self.startY = y
        self.inter=[x, y]
        self.maxLengthLeft = maxLengthLeft
        self.maxLengthUp= maxLengthUp 
        self.xvel = left
        self.yvel = up
        self.images=images
        for i in range(len(images)):
            self.images[i] = pg.transform.scale(self.images[i], (self.size, self.size))
        self.frame = 0
        self.frame_max = 6
        self.time = 0
        self.duration = 1/self.frame_max
        self.lastFrame=0
         
    def update(self, blocks):
        self.frame = int(self.time/self.duration)
        self.time += 1/FPS
        if self.frame>= self.frame_max:
            self.frame=0
            self.time=0
        self.rect.y += self.yvel
        self.rect.x += self.xvel
        self.collide(blocks)
        if (abs(self.startX - self.rect.x) > self.maxLengthLeft):
            self.xvel =-self.xvel
        if (abs(self.startY - self.rect.y) > self.maxLengthUp):
            self.yvel = -self.yvel
            
    def collide(self, blocks):
        for p in blocks:
            if self.rect.colliderect(p):
               self.xvel = - self.xvel
               self.yvel = - self.yvel
               
    def collideHero(self, hero, coords2):
        qwerty=self.rect.copy()
        qwerty.x-=coords2[0]
        qwerty.y-=coords2[1]
        if qwerty.colliderect(hero.rect):
             return True

    def draw(self, screen, coords2):
        
        qwerty=[self.rect.x, self.rect.y]
        qwerty[0]-=coords2[0]
        qwerty[1]-=coords2[1]
        self.inter=qwerty.copy()
        if self.xvel>=0:
            screen.blit(pg.transform.flip(self.images[self.frame], True, False), self.inter)
        else:
            screen.blit(self.images[self.frame], self.inter)
