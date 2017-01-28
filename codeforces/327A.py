
l = int(input())
a = list(map(int,input().split()))

# to zero
net = [0]*l
left = [0]*l
right = [0]*l

if(a[0] == 0):
    net[0] = 0
else:
    net[0] = 1
    left[0] =1

if(a[l-1] == 1):
    right[l-1] = 1

maximum = net[0]
for i in range (l-2, -1, -1):
    if(a[i] == 1):
        right[i] = right[i+1] + 1
    else:
        right[i] = right[i+1]
for i in range (1, l):
    if(a[i] == 1):
        net[i] = net[i-1] - 1
        if(net[i] < 0):
            net[i] = 0
        left[i] = left[i-1] +1
    else:
        net[i] = 1 + net[i-1]
        left[i] = left[i-1]
    maximum = max(maximum, net[i])

i = net.index(maximum)
r = 0
l = 0
if(i + 1 < l):
    r  = right[i+1]
if(i-maximum >= 0):
    l = left[i -maximum -1]
print (maximum+1+r+l)

