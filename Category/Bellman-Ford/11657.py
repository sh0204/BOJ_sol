import sys
import collections
input = sys.stdin.readline
INF = int(1e9)

n, m = map(int, input().split()) # 노드 수, 간선 수 
edges = [] # 모든 간선 정보
dist = [INF] * (n+1) # 최단 거리 테이블 초기화

# 그래프 
for _ in range(m):
    u, v, w = map(int, input().split()) # 노드, 인접 노드, 가중치
    edges.append((u, v, w))

# 벨만 포드 알고리즘
def bf(start):
    dist[start] = 0 # 시작 노드
    for i in range(n): # 정점 수만큼 반복
        for j in range(m): # 매 반복 간선 확인
            node = edges[j][0] # 현재 노드
            next_node = edges[j][1] # 다음 노드 
            cost = edges[j][2] # 가중치 
            # 다른 노드로 이동하는 거리가 짧
            if dist[node] != INF and dist[next_node] > dist[node] + cost:
                dist[next_node] = dist[node] + cost
                # n번째 값이 갱신-> 음수 순환O
                if i == n-1: # n-1번 이후 반복에 값 갱신-> 음수 순환 존재
                    return True
    return False

# 벨만 포드 알고리즘 수행
negative_cycle = bf(1)

if negative_cycle:
    print('-1')
else:
    # 1번 노드를 제외한 다른 모든 노드로 가기 위한 최단 거리 출력
    for i in range(2, n+1):
        if dist[i] == INF: # 도달할 수 없는 경우 -1 출력
            print('-1')
        else: # 도달할 수 있는 겨우 거리를 출력
            print(dist[i])