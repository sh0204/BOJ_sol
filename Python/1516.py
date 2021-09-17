import sys
from collections import deque
input = sys.stdin.readline

N = int(input())

# 노드와 간선의 정보
building = [[] for _ in range(N + 1)]
# 진입차수
indegree = [0] * (N + 1)
# 건물 걸리는 시간
time = [0] * (N + 1)

for i in range(1, N + 1):
    data = list(map(int, input().split()))[:-1]
    time[i] = data[0]
    building_data = data[1:]

    # 간선 연결 & 진입차수 설정
    for j in building_data:
        building[j].append(i)
        indegree[i] += 1

# 위상 정렬
def graph():
    res = [0] * (N + 1)
    q = deque()

    for i in range(1, N + 1):
        if indegree[i] == 0:
            q.append(i)

    while q:
        now = q.popleft()
        # 먼저 필요한 건물 걸리는 시간 + 현재 건물 걸리는 시간
        res[now] += time[now]
        for i in building[now]:
            indegree[i] -= 1
            # i 건물을 짓기 전 먼저 지어야하는 건물 걸리는 시간
            res[i] = max(res[i], res[now])
            if indegree[i] == 0:
                q.append(i)

    return res


ans = graph()
for i in range(1, N + 1):
    print(ans[i])