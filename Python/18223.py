import sys, heapq

input = sys.stdin.readline
INF = sys.maxsize

V,E,P = map(int, input().split())
graph = [[] for _ in range(V+1)]

for _ in range(E):
    a, b, c = map(int,input().split())
    graph[a].append([b,c])
    graph[b].append([a,c])

def Dijikstra(start,end):
    queue =[]
    heapq.heappush(queue, (0,start))
    dis = [INF]*(V+1)
    dis[start]=0

    while queue:
        cost, current = heapq.heappop(queue)
        if dis[current] <cost:
            continue
        for i in graph[current]:
            new = cost + i[1]
            if dis[i[0]]>new:
                dis[i[0]] = new
                heapq.heappush(queue,(new, i[0]))

    return dis[end]

if Dijikstra(1,V) == Dijikstra(1,P) + Dijikstra(P, V):
    print("SAVE HIM")

else:
    print("GOOD BYE")