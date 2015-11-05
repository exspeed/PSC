import math

tc = int(input())
while(tc):
    r, d = map(int,input().split())
    
    ans = (r*r*r)- ((r*r*r)/3)
    ans -= (r*r*d)- ((d*d*d)/3)
    v = (4/3) * math.pi * r*r*r
    ans *= math.pi
    print("%0.2f" % (v-ans))
    tc -= 1

