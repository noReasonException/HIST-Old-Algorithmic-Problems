num = int(input())
datain = input()
integr = datain.split()


for rem in set(integr):
    lonely = rem
    try:
        integr.remove(rem)
        integr.remove(rem)
    except:
        print(lonely)
        break
    

    
    
