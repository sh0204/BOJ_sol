import sys
from collections import deque
read = sys.stdin.readline

def bfs():
    q = deque()
    q.append(ice[0])

    visited = [[False] * M for _ in range(N)]
    visited[ice[0][0]][ice[0][1]] = True

    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]

    sel_ice = 0  # 탐색 빙산
    reduce = []

    # 녹일 빙산 탐색
    while q:
        x, y = q.popleft()

        sel_ice += 1
        cnt = 0  # 인접 바다 개수

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if 0 <= nx < N and 0 <= ny < M:
                if arr[nx][ny] == 0:
                    cnt += 1
                elif arr[nx][ny] > 0 and not visited[nx][ny]:  # 육지인 경우
                    visited[nx][ny] = True
                    q.append((nx, ny))

        if cnt != 0:
            reduce.append((x, y, cnt))

    # 녹이기
    for x, y, h in reduce:
        arr[x][y] = arr[x][y] - h if arr[x][y] - h > 0 else 0
        if arr[x][y] == 0 and (x, y) in ice:
            ice.remove((x, y))

    return sel_ice


N, M = map(int, read().split())
arr = [list(map(int, read().split())) for _ in range(N)]

ans = 0
ice = []  # 빙산

for x in range(1, N):
    for y in range(1, M):
        if arr[x][y] != 0:
            ice.append((x, y))

while True:
    # 덩어리 2개 이상
    if len(ice) != bfs():
        break

    ans += 1

    if sum(map(sum, arr[1:-1])) == 0:  # 빙하녹을때까지 덩어리 1개
        ans = 0
        break

# 출력
print(ans)