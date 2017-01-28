import math

def choose(total, pick):
    return math.factorial(total)/(math.factorial(pick)* math.factorial(total-pick))
    

tc = int(input())

while(tc):
    tc -= 1
    club, exe = map(int,input().split())

    csize = list(map(int, input().split()))
    
    valid = 1
    sum1 = 0
    for x in csize:
        valid *= x
        sum1 += x
        
    valid *= choose(sum1-club, exe-club)
    print(sum1-club, exe-club)
    total = choose(sum1, exe)

    print(valid, total)
    print("%.6f" % (valid/total))




