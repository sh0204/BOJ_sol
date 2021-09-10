from collections import deque

#상하좌우
dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]

def bfs(x, y): #적록색약 아닌 사람
    q.append([x, y])
    rs[x][y] = cnt
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < n and 0 <= ny < n:
                if graph[nx][ny] == graph[x][y] and rs[nx][ny] == 0:
                    q.append([nx, ny])
                    rs[nx][ny] = 1

n = int(input())
graph = [list(map(str, input())) for _ in range(n)]
rs = [[0]*n for _ in range(n)]
q = deque()

cnt = 0
for i in range(n):
    for j in range(n):
        if rs[i][j] == 0:
            bfs(i, j)
            cnt += 1
print(cnt, end=' ')


#적록색약
for i in range(n): #R과 G 하나로 통합
    for j in range(n):
        if graph[i][j] == 'R':
            graph[i][j] = 'G'
rs = [[0]*n for _ in range(n)]

cnt = 0
for i in range(n):
    for j in range(n):
        if rs[i][j] == 0:
            bfs(i, j)
            cnt += 1
print(cnt)