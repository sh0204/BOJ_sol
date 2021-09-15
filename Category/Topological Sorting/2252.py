import sys
import sys 
from collections import deque


n,m = map(int, input().split())
graph = [[] for _ in range(n+1)]
degree = [0] * (n+1) # 진입 차수 리스트

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    degree[b] += 1

#위상 정렬 알고리즘
queue = deque() # 큐 생성
for i in range(1, n+1):
    if degree[i] == 0:
        queue.append(i)
ans = []
while queue :
    now = queue.popleft()
    ans.append(now)
    for i in graph[now]:
        degree[i] -= 1
        if degree[i] == 0 :
            queue.append(i)
for a in ans:
    print(a, end=' ')