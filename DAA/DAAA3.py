class Item:
    def __init__(self,profit,weight):
        self.profit=profit
        self.weight=weight


def fractionalknapsack(w,arr):
    arr.sort(key=lambda x: x.profit/x.weight, reverce=True)
    finalvalue=0.0
    for item in arr:
        if(w>item.weight):
            finalvalue+=item.profit
            weight-=item.weight
        else:
            finalvalue+=item.profit*(w/item.weight)
            break
    return finalvalue

if __name__=="__main__":
    n=int(input("Enter no. of items :\n"))
    arr=[]
    
    for i in range(n):
        profit=int(input("Enter profit of item"+str(i+1)+":\n"))
        weight=int(input("Enter the weight of item"+str(i+1)+":\n"))
        arr.append(Item(profit,weight))
    
    w=int(input("Enter capacity of knapsack:\n"))
    
    fractionalknapsack(w,arr)