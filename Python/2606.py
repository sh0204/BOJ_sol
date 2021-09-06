#dfs로 푼 문제

com= int(input()) #컴퓨터 수
con = int(input()) #연결된 쌍 수
graph = [[0] * (com+1) for i in range(com+1)] #경로저장용 2차원 리스트
visited = [0] * (com+1) #방문 정점 확인용

for _ in range(con): #경로 graph에 저장
    a, b = map(int, input().split())
    graph[a][b] = graph[b][a] = 1

result = []

def dfs(start): #탐색
    visited[start] = 1
    for i in range(1, com+1):
        if graph[start][i] == 1 and visited[i] == 0:
            result.append(i)
            dfs(i) #들리지 않은 정점의 경우 다시 반복
    return len(result)

print(dfs(1))