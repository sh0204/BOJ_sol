N,M = map(int, input().split())
A=[]
for i in range(N):
    A.append(list(map(int,input().split())))

M,K =  map(int, input().split())
B=[]
for i in range(M):
    B.append(list(map(int,input().split())))

result = [[0 for _ in range(K)] for _ in range(N)]

for i in range(N):
    for j in range(K):
        for l in range(M):
            result[i][j]+=A[i][l]*B[l][j]

for row in result:
    for j in row:
        print(j,end=" ")
    print()

