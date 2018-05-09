import webbrowser
import pygame
import time
pygame.init()
screen = pygame.display.set_mode([1920, 1080])
black = pygame.Color(0, 0, 0)
white = pygame.Color(255,255,255)
def showload(search):
    myFont = pygame.font.SysFont('monaco', 72)
    Ssurf = myFont.render('Мы переходим по ссылке...:'+search, True, black)
    Srect = Ssurf.get_rect()
    Srect.midtop = (960, 540)
    screen.blit(Ssurf, Srect)
    pygame.display.flip()
url = str(input("Введите что вы хтотите найти:"))
print('http:///www.yandex.ru/yandsearch?text='+url)
if (url == 'Дневник') or (url == "дневник") or (url =='пгу'):
	screen.fill(white)
	search = 'https://oauth20.mos.ru/sps/login.jsp'
	showload(search)
	time.sleep(5)
	webbrowser.open('https://oauth20.mos.ru/sps/login.jsp')
else:
	screen.fill(white)
	search = 'http://www.yandex.ru/yandsearch?text='+url
	showload(search)
	time.sleep(5)
	webbrowser.open('http://www.yandex.ru/yandsearch?text='+url)




