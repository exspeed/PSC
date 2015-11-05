input()
a = list(map(int, input().split()))
sum = [0] * (10**5 + 2)
for i in a:
    sum[i] = sum[i] + i

for i in range(2, len(sum)):
    sum[i] = max(sum[i-1], sum[i-2]+sum[i])

print (sum[-1])
    
