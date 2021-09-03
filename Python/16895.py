MAX = 1001
mod = 1000000009
dp = [[0 for _ in range(1005)] for _ in range(1005)]

dp[1][1] = 1
dp[2][1] = 1
dp[2][2] = 1
dp[3][1] = 1
dp[3][2] = 2
dp[3][3] = 1

for i in range(4,MAX):
    # 사용할 수 있는 수= 현재 수의 크기 
    # 예를 들어 5의 경우 숫자 6개로 사용하여 만들 수 X
    for j in range(1, i+1):
        dp[i][j] = (dp[i - 1][j - 1] + dp[i - 2][j - 1] + dp[i - 3][j - 1]) % mod

t= int(input())

for _ in range(t):
    n,m = map(int, input().split())
    ans = 0
    for i in range(1, m + 1):
        ans = (ans + dp[n][i]) % mod
    print(ans)