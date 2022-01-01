rocknum = int(input())
assert rocknum <= 100

elements = []
gem = 0
counter = 0


for i in range(rocknum):
    datain = input()
    assert datain.islower()
    check = []
    check.extend(datain)
    assert len(check) <= 100
    elements.append(datain)

test = list(elements )
test.extend(test[0])


test = test[rocknum:]

for char in test:
    for string in elements:
        if char in string:
            counter+=1
            if counter == len(elements):
                gem+=1
                counter = 0
                break
            continue
        counter = 0
        break
print(gem)

