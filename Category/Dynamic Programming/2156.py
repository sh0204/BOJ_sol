n = int(input())
wine = []

for i in range(n):
    wine.append(int(input()))

dp = [0]*n
dp[0] = wine[0]
dp[1]=wine[0]+wine[1]
dp[2]=max(wine[2]+wine[0],wine[2]+wine[1],dp[1])


for i in range(3, n):
    #1. 이전 와인, 현재와인 마시고, 전전 와인 안마심 : wine[i-1]+wine[i]+dp[i-3]
    #2. 현재와인 마시고,이전 와인 안마심 : wine[i]+dp[i-2]
    #3. 현재와인 안마심
    dp[i] = max(wine[i-1]+wine[i]+dp[i-3], wine[i]+dp[i-2], dp[i-1])

print(dp[n-1])