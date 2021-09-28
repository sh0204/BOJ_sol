# 출발지점에서 도착지점으로 가는 단방향 그래프, 왕복 그래프 만들기
# 그래프에서 출발점에서 도착점으로 연결된 점을 이동
# 출발점에서 도착점까지 최단 거리로 이동하는데 드는 비용 edge에 저장
# edge[이동할점] 가중치 + 이동비용 보다 크면 값을 변경
# 합이 가장 큰 값 출력

import sys
from heapq import heappush, heappop
input = sys.stdin.readline

N, M, X = map(int, input().split())
inf = sys.maxsize

graph = [[] for _ in range(N + 1)] #가는 그래프
edge = [inf] * (N + 1)
graph_r = [[] for _ in range(N + 1)] #오는 그래프
edge_r = [inf] * (N + 1)

def Dijkstra(start, edge, graph): #다익스트라 알고리즘
    heap = []
    heappush(heap, [0, start])
    edge[start] = 0
    while heap:
        w, n = heappop(heap)
        if edge[n] < w:
            continue
        for nn, wei in graph[n]:
            nw = wei + w
            if nw < edge[nn]:
                edge[nn] = nw
                heappush(heap, [nw, nn])

for i in range(M):
    s, e, t = map(int, input().split()) #시작점, 끝점, 소요시간
    graph[s].append([e, t])
    graph_r[e].append([s, t])

Dijkstra(X, edge, graph)
Dijkstra(X, edge_r, graph_r)

Max = 0
for i in range(1, N + 1):
    Max = max(Max, edge[i] + edge_r[i])

print(Max)