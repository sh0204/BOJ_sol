#dfs
#인접한 곳에 1이 있으면 그 점에서 다시 인접한 곳 탐색
#탐색할 때마다 카운트 세주고, 탐색 끝나면 정답 저장
n= int(input())
graph =[]

for _ in range(n): #자료 입력
    graph.append(list(map(int,input())))

ans=[]
cnt =0

#상하좌우
dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

def dfs(x,y):
    global cnt
    if x<0 or x>= n or y<0 or y>=n: # 범위
        return False

    if graph[x][y]==1:
            cnt +=1
            graph[x][y] = 0
            for i in range(4):
                dfs(x+dx[i],y+dy[i])
            return True

for i in range(n):
    for j in range(n):
        if dfs(i,j)==True:
            ans.append(cnt)
            cnt = 0
            
print(len(ans))
ans.sort()
for i in ans:
    print(i)