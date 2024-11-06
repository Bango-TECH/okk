def knapsack(W,weight,value,n):
    dp=[0]+(W+1)
    
    for i in range(n):
        for w in range(W,weight[i]-1,-1):
            dp[w]=max(dp[w],value[i]+dp[w-weight[i]])
    return dp[w]

n=int(input("Enter the number of items:"))
W=int(input("Enter the maximum weight of the knapsack"))
weight=list(map(int,input("Enter the weight").split()))
value=list(map(int,input("Enter the value of items").split()))

# Solve the knapsack problem
max_value = knapsack(W, weight, value, n)
print("The maximum value that can be achieved is:", max_value)