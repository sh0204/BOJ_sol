import sys
from heapq import heappush, heappop

input = sys.stdin.readline
inf = sys.maxsize

def Dijkstra(start):
    heap=[]
    heappush(heap, [0, start])
    edge[start] = 0
    while heap:
        w, n = heappop(heap)
        for nn, wei in graph[n]:
            nw = wei + w
            if nw < edge[nn]:
                edge[nn] = nw
                heappush(heap, [nw, nn])

N, M = map(int,input().split())
graph = [[] for _ in range(N+1)]
edge = [inf]*(N+1)

for _ in range(M):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))
    graph[b].append((a, c))

Dijkstra(1)
print(edge[N])