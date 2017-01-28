T = int(input())

while(T):
    T -= 1
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    low, high= a[0], a[len(a)-1]

    marker = (high + low) /k
    section = [[] for x in range(k)]
    index = 0
    for i in a:
        if(i < marker):
            section[index].append(i)
        else:
            index += 1
            section[index].append(i)
            marker += marker
    
    large= -1
    for i in section:
        b = (i[0] + i[len(i)-1])/2
        b = max(b-i[0], b-i[len(i)-1])
        large = max(b, large)
    print("%.1f" % large)
        

                
    
