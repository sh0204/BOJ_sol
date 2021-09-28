# 종료지점 정해짐  -> 마지막 출력에서 종료지점만 출력

import sys
from heapq import heappush, heappop

def Dijkstra(start, end): #다익스트라 알고리즘
    heap = []
    heappush(heap, (0, start))  # 시작지점 힙 추가
    d = [sys.maxsize] * (N + 1)  # 각 정점사이의 거리 무한대로 초기화
    d[start] = 0  # 0으로 초기화

    while heap:
        weight, index = heappop(heap)
        for e, c in bus[index]:
            if d[e] > weight + c:
                d[e] = weight + c
                heappush(heap, (weight + c, e))
    return d[end]

N = int(input())  # 도시의 개수
M = int(input())  # 버스의 개수
bus = [[] for _ in range(N + 1)]

for _ in range(M):
    start, end, cost = map(int, input().split())  # 출발지, 도착지, 비용
    bus[start].append((end, cost))
start, end = map(int, input().split())  # 찾고자하는 비용 경로(출발지, 도착지)


print(Dijkstra(start, end))    