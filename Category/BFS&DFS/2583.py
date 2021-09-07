from collections import deque
#m = 세로, n=가로 , k= 직사각형 갯수
#bfs활용

m,n,k = map(int,input().split())
graph = [[0]*(n) for i in range(m)] #경로저장용 2차원 리스트
dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]


for _ in range(k): #입력받은 숫자들로 직사각형 그려줌
    x1, y1, x2, y2 = map(int, input().split())
    for i in range(y1, y2):
        for j in range(x1, x2):
            graph[i][j] = 1

result = []

for i in range(m): #영역 검사
    for j in range(n):
        if graph[i][j] == 0:
            count = 1
            queue = deque([])
            queue.append([i, j])
            graph[i][j] = count

            while queue:
                y, x = queue.popleft()
                for k in range(4):
                    nY = y + dy[k]
                    nX = x + dx[k]

                    if 0 <= nX < n and 0 <= nY < m and graph[nY][nX] == 0:
                        graph[nY][nX] = 1
                        queue.append([nY, nX])
                        count += 1

            result.append(count)
print(len(result))
result.sort()
for num in result:
    print(num,end=" ") 
