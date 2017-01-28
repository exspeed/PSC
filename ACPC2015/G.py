tc = int(input())

while(tc):
    tc -= 1
    N = int(input())
    grid =  [[0]*N for x in range (N)]
    for i in range(0, N):
        row = input()
        count = 0
        for j in range(0,N):
            count += 1
            if(row[j] == 'F'):
                count = 0
                grid[i][j] = 0
            else:
                grid[i][j] = count
    dp = [[0]*N for x in range(N)]
    best = 0

    for i in range(0, N):
        if(grid[0][i] > 0):
            dp[0][i] = 1
            best = 1
        if(grid[i][0] > 0):
            dp[i][0] = 1
            best= 1

    for i in range(1, N):
        for j in range(1, N):
            if(grid[i][j] != 0):
                a = min(dp[i-1][j], dp[i][j-1])
                dp[i][j] = min(dp[i-1][j-1], a)+1
                best = max(best,dp[i][j])
    
    print(best)
    
        
        
    

'''
    for i in grid:
        for j in i:
            print (j, end="")
        print()                
'''



