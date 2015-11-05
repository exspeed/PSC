n = int (input())
a = list(map(int, input().split()))

l,r,net, z = [0]*n,[0]*n,[0]*n, [0]*n

lp =0
rp = 0
gain =0
zero = 0
for i in range(0, n):
    if(a[i] == 1):
        lp += 1
        gain -= 1
        if(gain < 0):
            gain = 0
    if(a[i] == 0):
        gain += 1
        zero += 1
    if(a[n-1-i] == 1):
        rp += 1
    l[i] = lp
    net[i] = gain
    r[n-1-i] = rp
    z[i] = zero

ans = max(l)
max_gain = max (net)
if(max_gain == 0):
    print (ans -1)
else:
    i = net.index(max_gain)
    rp = 0
    lp = 0
    neg = 0
    if(i + 1 < n):
        rp = r[i+1]
    if(i -  >= 0):
        lp = l[i-max_gain]
        neg = z[i] - z[i- z[i]]
    print(z[i] -neg +  rp +lp)
        
    


    
    
    


