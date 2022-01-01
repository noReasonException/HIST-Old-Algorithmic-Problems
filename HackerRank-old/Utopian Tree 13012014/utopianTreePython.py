x=eval(input())
sit=True
found=1
for x in range(0,x):
    dat=eval(input())
    for y in range(0,dat):
        if sit==True :
            found+=1
            sit=False
            continue
        else:
            found*=2
            sit=False
            continue
    print(found)
    found=1
    
