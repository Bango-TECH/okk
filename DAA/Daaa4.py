def knapsack(W,weight,value,n):
    dp=[0]*(w+1)
    for i in range(n):
        for w in range(w,weight[i]-1,-1):
            dp[w]=max(dp[w], value[i] + dp[w - weights[i]])
    return dp[W]

# Input
n = int(input("Enter the number of items: "))
W = int(input("Enter the maximum weight capacity of the knapsack: "))
weights = list(map(int, input("Enter the weights of the items: ").split()))
values = list(map(int, input("Enter the values of the items: ").split()))

# Solve the knapsack problem
max_value = knapsack(W, weights, values, n)
print("The maximum value that can be achieved is:", max_value)