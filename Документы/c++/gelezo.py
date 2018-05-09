n=int(input())#количество рядов
k=int(input())#
p=int(input())
z=int(input())


if z%k==0:
	print (p+(p*10/100))
elif k/2==z:
		print(p-(p*20/100))
elif k/2+1==z:
		print(p-(p*20/100))
elif z%k==1:
		print (p+(p*10/100))
else:
	print(p)