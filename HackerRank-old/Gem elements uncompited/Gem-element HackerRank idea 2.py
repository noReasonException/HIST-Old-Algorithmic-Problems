rocknum = int(input())
elements = []
test = []
#εισαγωγη ως 2D πίνακα
for ind in range(rocknum):
    elements.insert(ind,input())
#διαγραφή διπλών μέσα στους 2d πίνακες
for ind in range(len(elements)):
    elements[ind] = set(elements[ind])
#Απλοιποίηση λιστών με τα κοινά τους
for ind in range(len(elements)):
    
    try:
        rem1 = elements[ind]
        rem2 = elements[ind + 1]
        test = elements[ind].intersection(elements[ind + 1])
        elements.append(test)
        elements.remove(rem1)
        elements.remove(rem2)
    except:
        test = elements[-1].intersection(elements[-2])
        elements.pop()
        elements.pop()
        elements.append(test)
        break
    
    
    
count = 0
for x in range(len(elements[0])):
    count+=1
print(count)


    


