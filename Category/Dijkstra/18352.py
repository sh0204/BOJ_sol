import sys
from heapq import heappop, heappush

input = sys.stdin.readline
INF = sys.maxsize

n, m, k, x = map(int, input().split())
graph = [[] for _ in range(n + 1)]
dp = [INF] * (n + 1)
heap = []

def Dijkstra(start): #다익스트라 알고리즘
    heappush(heap, [0, start])
    dp[start] = 0
    while heap:
        w, n = heappop(heap)
        for nn, wei in graph[n]:
            nw = wei + w
            if nw < dp[nn]:
                dp[nn] = nw
                heappush(heap, [nw, nn])

for _ in range(m):
    A, B = map(int, input().split())
    graph[A].append([B, 1])

Dijkstra(x)
ans = []

for i in range(1, n + 1):
    if dp[i] == k:
        ans.append(i)

if ans:
    for i in ans:
        print(i)
else:
    print(-1)
