import qrcode
name=str(input())
img = qrcode.make(name)
img.save("/home/vladislav/Изображения/project/"+name+".png")