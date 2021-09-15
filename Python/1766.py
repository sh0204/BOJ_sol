# 위상정렬 알고리즘
# 진입차수가 0인 정점 큐에 삽입
# 큐에서 원소 꺼내 원소 간선 제거
# 제거 이후 진입차수가 0이된 정점 큐 삽입
# 큐가 빌 때까지 반복

import heapq
#파이썬 힙 자료구조
#최소 힙 형태로 정렬

n, m = map(int, input().split())
graph=[[] for _ in range(n+1)]
inDegree=[0 for _ in range(n+1)]
 
q=[]
#문제 순서
for _ in range(m):
    a,b=map(int,input().split())
    graph[a].append(b)
    inDegree[b]+=1
 
#진입차수가 0이면 큐에 넣기
for i in range(1,n+1):
    if inDegree[i]==0:
        heapq.heappush(q,i)
        #i를 q에 추가
 
#위상정렬
ans=[]
while q:
    a=heapq.heappop(q)#힙에서 가장 작은 원소 pop = 최소 힙 사용
    ans.append(a)
    for i in graph[a]:
        inDegree[i]-=1
        if inDegree[i]==0:
            heapq.heappush(q,i) #q리스트에 i추가
 
print(*ans)
    