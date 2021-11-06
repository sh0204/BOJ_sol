n = int(input())

INF = int(1e9)
dp = [[INF] * (1 << n) for _ in range(n)]


def dfs(x, visited):
    if visited == (1 << n) - 1:     # 모든 도시를 방문
        if graph[x][0]:             # 출발점으로 가는 경로O
            return graph[x][0]
        else:                       # 출발점으로 가는 경로X
            return INF

    if dp[x][visited] != INF:       # 이미 최소비용 계산
        return dp[x][visited]

    for i in range(1, n):           # 모든 도시를 탐방
        if not graph[x][i]:         # 가는 경로X-> skip
            continue
        if visited & (1 << i):      # 이미 방문한 도시 -> skip
            continue

        # 점화식 
        dp[x][visited] = min(dp[x][visited], dfs(i, visited | (1 << i)) + graph[x][i])
    return dp[x][visited]


graph = []
for i in range(n):
    graph.append(list(map(int, input().split())))

print(dfs(0, 1))