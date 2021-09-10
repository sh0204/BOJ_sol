from collections import deque
import sys

N, M = map(int, input().split())
graph = [[] for _ in range(N + 1)]
visited = [False] * (N + 1)

def BFS(graph, start, visited): #BFS이용 탐색
    queue = deque([start])
    visited[start] = True

    while queue:
        k = queue.popleft()
        for i in graph[k]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True

for i in range(M):
    u,v = map(int,sys.stdin.readline().split()) #간선 양 끝점
    graph[v].append(u)
    graph[u].append(v)

cnt = 0
for i in range(1,N+1):
    if not visited[i]:
        BFS(graph,i,visited)
        cnt += 1

print(cnt)
