import math

n,k = input().split(" ")
# k = int(input())
n = int(n);
k = int(k)
s = input().rstrip()
t = input().rstrip()

arr = []

for i in range(k):
    temp = input().split(" ")
    arr[i] = temp;
    # for j in range(k):
        # arr[i][j] = int(input())

cost = 0;

for i in range(n):
    minCost = math.inf
    if(s[i]!=t[i]):
        s1 = s[i] - 97
        t1 = t[i] - 97
        for j in range(k):
            minCost = min(int(arr[s1][j])+int(arr[t1][j]), minCost)
        cost+=minCost
print(cost)
    
