
n,m = map(int, input().split())

string = list(input())

for i in range(0, m):
    x,y =  input().split()
    for j in range(0, len(string)):
        if(string[j] == x):
            string[j] = y
        elif (string[j] == y):
            string[j] = x
print("".join(string))    


