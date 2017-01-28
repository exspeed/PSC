import bisect

tc = int(input())

possible = []
i = 1
total = 0
while(total < 10**15):
    level = (i+1)*(i/2)
    i += 1
    total += level
    possible.append(total)
while(tc):
    val = int(input())
    if(val in possible):
        print(possible.index(val)+1)
    else:
        print(1)
    tc -= 1
    
