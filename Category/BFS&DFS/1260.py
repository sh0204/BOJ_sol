def dfs(v): #깊이 우선 탐색
    print(v, end=' ')
    visited[v] = 1
    for i in range(1, n + 1):
        if visited[i] == 0 and graph[v][i] == 1:
            dfs(i)


def bfs(v): #너비 우선 탐색
    queue = [v]
    visited[v] = 0
    while(queue):
        v = queue[0]
        print(v, end=' ')
        del queue[0]
        for i in range(1, n + 1):
            if visited[i] == 1 and graph[v][i] == 1:
                queue.append(i)
                visited[i] = 0


n,m,v = map(int,input().split())
graph = [[0]*(n+1) for i in range(n+1)] #경로저장용 2차원 리스트
visited= [0 for i in range(n+1)]#방문 정점 확인용

for i in range(m):
    x,y= map(int, input().split())
    graph[x][y] = graph[y][x] = 1

dfs(v)
print()
bfs(v)