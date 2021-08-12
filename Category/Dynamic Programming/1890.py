n = int(input())

way=[]
for i in range(n):
    way.append(list(map(int,input().split())))

#해당 좌표 이동가능한 방법의 갯수
dp = [[0 for _ in range(n)] for _ in range(n)]
#시작 지점 1로 지정
dp[0][0] = 1

for y in range(n):
    for x in range(n):
        if way[y][x]==0:
            break
        now = way[y][x]
        #오른쪽 이동
        if x+now <n:
            dp[y][x+now] += dp[y][x]
        #아래로 이동
        if y+now <n:
            dp[y+now][x] += dp[y][x]

print(dp[y][x])