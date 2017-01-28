n = input()
a =list( map(int, input().split()))

ans = 1
count = 1
for i in range (1, len(a)):
    if(a[i] >= a[i-1]):
        count += 1
    else:
        count = 1
    ans = max(ans, count)

print(ans)
