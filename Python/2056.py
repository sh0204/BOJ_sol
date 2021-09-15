import sys
from collections import defaultdict 
from collections import deque

input = sys.stdin.readline

N = int(input())
times = [0 for _ in range(N + 1)]  #작업에 걸리는 시간 리스트
inDegree = [0 for _ in range(N + 1)]
dp = [0 for _ in range(N + 1)]


for i in range(1, N + 1):
    work = list(map(int, input().split())) #작업 정보 입력
    times[i] = work[0]  #작업 시간 기록
    inDegree[i] += work[1]
    for j in work[2:]: #선행되는 직업이 있다면
        graph[j].append(i) # 그래프에 넣어줌

for i in range(1, N + 1):
    if inDegree[i] == 0:
        dp[i] = times[i]
        queue.append(i)

while queue:
    node = queue.popleft()

    for i in graph[node]:
        inDegree[i] -= 1
        dp[i] = max(dp[node] + times[i], dp[i])
        if inDegree[i] == 0:
            queue.append(i)

print(max(dp))