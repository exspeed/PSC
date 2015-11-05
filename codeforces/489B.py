n = input()
a = list(map(int, input().split()))
m = input()
b = list(map(int, input().split()))

a =sorted(a)
b =sorted(b)



ans = 0;
def match(a1, a2):
    for i in range (0, len(a1)):
        for j in range (0, len(a2)):

           if(abs(a1[i] - a2[j]) < 2):
               global ans
               ans += 1
               a2.remove(a2[j])
               break
           
if(n > m):
    match(a,b)
    print(ans)
else:
    match(b,a)            
    print(ans)
