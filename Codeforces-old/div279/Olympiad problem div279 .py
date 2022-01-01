inp=int(input())
dat = input()
pin = dat.split()
import sys
for x in range(len(pin)):
    pin[x] = int(pin[x])


find = 0
teams = 0
data= []
a=0
out=[]
for c in range(inp):
    for c0 in range(len(pin)):
        if pin[c0] == 1:
            find+=1
            data.append(c0)
            pin[c0]=-1
            break
    for c1 in range(len(pin)):
        if pin[c1] == 2:
            find+=1
            data.append(c1)
            pin[c1]=-1
            break
    for c2 in range(len(pin)):
        if pin[c2] == 3:
            find+=1
            data.append(c2)
            pin[c2]=-1
            break

        
    if find==3:
        for x in range(len(data)):
            data[x] = data[x] + 1
        find=0
        teams+=1
        a=a+1
        out=out+data
        data = []
    else:
        break
        

print(teams)
if teams==0:
    exit(0)
x=0
countr=0
for x in range(len(out)):
    sys.stdout.write(str(out[x])+" ")
    x+=1
    countr+=1
    if countr==3:
        sys.stdout.write("\n")
        countr=0
    
    
    
    

