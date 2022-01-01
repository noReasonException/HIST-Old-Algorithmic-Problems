def vasua_and_socks(n,m):
    new_pair_of_socks=0 #Every m days -> n+1
    days_counter=0 #final result variable
    while(n>0): #While vasya has socks
        days_counter+=1 #days counter [in every loop adds +1 ]
        n-=1 #socks counter
    new_pair_of_socks+=1#every m days counter adds +1
    if(new_pair_of_socks == m): # check if need to plus 1 in socks number
        new_pair_of_socks=0
        n+=1
    return( days_counter) #return the final result after the while() ends !






def vasua_and_socks_version2(n,m):
    days_counter=0
    while(n>0):
        days_counter+=1
        n-=1
        if(days_counter % m == 0):
            n+=1
    print( days_counter)

def vasua_and_socks_version3(n,m):
    days_counter=0
    while(n>0):
        days_counter+=1
        if not(days_counter % m == 0):
            n-=1
    print( days_counter)


vasua_and_socks_version3(2,2)

