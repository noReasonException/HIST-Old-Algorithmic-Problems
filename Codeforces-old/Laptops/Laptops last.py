
price=[]
quality=[]
n=int(input())
for x in range(0,n):
    a = int(input ())
    price.append(a)
    b =int(input())
    quality.append(b)
flag=0
for x in range(0,n):
    if pricearray[x] < qualityarray[x]:
        print ("Happy Alex")
        flag=1
        break
if(flag==0):
    print("Poor Alex")


    
