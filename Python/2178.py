#bfs 너비 우선 탐색 사용

from collections import deque

N,M= map(int, input().split())

maze= [list(map(int, input())) for _ in range(N)]
count= [[0]*M for _ in range(N)]
visited = [[False]*M for _ in range(N)]

queue = [[0, 0]] #시작좌표
visited[0][0] = True
count[0][0] = 1

# dx[0], dy[0] => 오른쪽
# dx[1], dy[1] => 왼쪽
# dx[2], dy[2] => 아래
# dx[3], dy[3] => 위

# 상 하 좌 우
dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]


while queue:
    y, x = queue.pop(0)

    if x == M and y == N:
        break

    for i in range(4):
        nX = x + dx[i]
        nY = y + dy[i]

        if 0 <= nX < M and 0 <= nY < N:
            if maze[nY][nX] == 1 and not visited[nY][nX]:
                visited[nY][nX] = True
                queue.append([nY, nX])
                count[nY][nX] += count[y][x] + 1

print(count[N-1][M-1])