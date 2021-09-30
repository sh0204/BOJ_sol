# BFS 벽을 최소 몇 개 부수어야 하는가?
from collections import deque
M,N = map(int, input().split())
dx = [-1,1,0,0]
dy = [0,0,-1,1]

arr = [ list(map(int, input())) for _ in range(N)]
visit = [[-1] * M for _ in range(N)]  #벽을 최소 부서야하는 개수 담을 리스트

q = deque()
q.append((0,0))
visit[0][0] = 0
while q:
    x,y = q.popleft()
    for k in range(4):
        nx = x + dx[k]
        ny = y + dy[k]
        if 0 <= nx < N and 0 <= ny < M:
            if visit[nx][ny] == -1:
                if arr[nx][ny] == 0:
                    visit[nx][ny] = visit[x][y]
                    q.appendleft((nx, ny))
                else:
                    visit[nx][ny] = visit[x][y] + 1
                    q.append((nx, ny))
print(visit[N-1][M-1])