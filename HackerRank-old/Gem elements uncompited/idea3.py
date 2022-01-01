rocknum = int(input())
elements = []
testlist = []
testlist2 = []
for ind in range(rocknum):
    elements.append(set(input()))
    if ind > 1:
        elements = elements[ind -1].intersection(elements[ind])
print(len(elements))


