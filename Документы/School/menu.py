import pygame
import sys
import webbrowser
pygame.init()
screen_size=(800,60)
disp=pygame.display.set_mode(screen_size, pygame.DOUBLEBUF)
url=u""
clock=pygame.time.Clock()
default_font=pygame.font.get_default_font()
font=pygame.font.SysFont(default_font,16)

disp.fill((240,240,240,255))
pygame.display.flip()
while True:
    for event in pygame.event.get():
        print(event)
        disp.blit(font.render("Введите что вы хтотите найти:",True,(30,30,30,255)),(0,0))
        pygame.display.flip()
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RETURN:
                print (url)
                if (url == 'Дневник') or (url == "дневник") or (url =='пгу'):
                    webbrowser.open('https://oauth20.mos.ru/sps/login.jsp')
                else:
                    webbrowser.open('http://www.yandex.ru/yandsearch?text='+url)
                pygame.quit()
                sys.exit()
            else:
                url+=event.unicode
                disp.fill((240,240,240,255))
                disp.blit(font.render(url,True,(30,30,30,255)),(0,10))
                pygame.display.flip()
    clock.tick(24)
print(url)
