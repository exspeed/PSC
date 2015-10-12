n , t = map(int, input().split())

def func():
    if len(str(t)) > n:
        print(-1)
        return
    else:
        ans = str(t)
        for i in range (0, n - len(str(ans))):
            ans = ans + '0'
        print (ans)
            
func()
