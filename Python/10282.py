import sys
from heapq import heappush, heappop

input = sys.stdin.readline
inf = sys.maxsize

def Dijkstra(start, edge, graph): #다익스트라 알고리즘
    heappush(heap, [0, start])
    edge[start] = 0
    while heap:
        w, n = heappop(heap)
        for nn, wei in graph[n]:
            nw = wei + w
            if nw < edge[nn]:
                edge[nn] = nw
                heappush(heap, [nw, nn])

test = int(input())
for _ in range(test) :
    n,d,c = map(int,input().split()) #컴퓨터 수, 의존성 개수, 해킹 컴퓨터 번호
    edge = [inf] * (n+1)
    heap = []
    graph = [[] for _ in range(n + 1)]

    for _ in range(d):
        a, b, s = map(int, input().split()) 
        #a->b의존
        #b 감염되면 s 후 a도 감염
        graph[b].append([a, s])

    Dijkstra(c,edge, graph)

    cnt = 0
    res = 0
    for i in edge:
        if i != inf:
            cnt += 1
            res = max(res, i)

    print(f"{cnt} {res}")