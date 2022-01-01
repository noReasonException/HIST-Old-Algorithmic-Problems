times = int(input())
intlist = input().split()

if len(intlist) == 1:
    print(intlist[0])
    exit()

if len(intlist) > times:
    exit()
while len(intlist) >1:
    stop = False
    for int1 in range(len(intlist)):
        if stop:
            break
        for int2 in range(len(intlist)):
            try:
                if intlist[int1] == intlist[int2] and int1 != int2:
                    intlist.pop(int1)
                    intlist.pop(int2 - 1)
                    stop = True
                    break
            except IndexError:
                pass

print(intlist[0])
