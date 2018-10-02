import math
t=int(input())
while t>0:
  l=[]
  n=int(input())
  for k in range(2,n+1): 
     if k==2:
       l.append(k)
     elif k%2==0:
       continue
     else:
       for i in range(3,int(math.sqrt(k))+1,2):
          if k%i==0:
             break
       else:
         l.append(k)
  print(*l)
  t=t-1
