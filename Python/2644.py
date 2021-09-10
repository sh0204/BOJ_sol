from collections import deque
import sys

N= int(input()) #사람 수
a,b = map(int, input().split()) #촌 수 계산 두 번호
M = int(input()) #관계 개수

graph = [ [] for i in range(N+1)] 
result=[0 for i in range(N + 1)] #결과 출력 리스트

def BFS(start): #시작부터 탐색
    q = deque()
    q.append(start)
    visited = [0 for i in range(N + 1)]
    visited[start] = 1
    while q:
        k = q.popleft()
        for i in graph[k]:
            if visited[i] == 0:
                visited[i] = 1
                result[i] = result[k] + 1
                q.append(i)

for i in range(M):
    x,y = map(int,input().split()) #부모 자식 관계 
    #양방향으로 값 넣어줌
    graph[x].append(y)
    graph[y].append(x)

BFS(a)
print(result[b] if result[b] != 0 else -1)
