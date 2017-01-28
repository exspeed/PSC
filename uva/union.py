L = [0,1,2,2,3,4,5,6]

def find(x):
    if(x ==L[x]):
        return x
    root = find(L[x])
    L[x] = root
    print(x)
    return root

print(find(7))
print (L)

    
