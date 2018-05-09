k=0
a=[]
n=2018
for i in range(0,n):
	a.append(int (input()))
	if a[i]==oct(a[i]):
		k+=1
print(k)