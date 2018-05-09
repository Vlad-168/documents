import time

m,n = input().split()
start_time = time.time()
m=int(m)
n=int(n)
num = 0
string = ""
m_string = ""
n=2**n
for i in range(1,m+1):
	string = str(i)
	m_string = m_string + string
	m = int(m_string)
	if m%n == 0:
		num+=1
print(num)
print("--- %s seconds ---" % (time.time() - start_time))
