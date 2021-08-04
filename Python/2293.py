n,k = map(int, input().split())
worth=[]
for i in range(n): #코인 종류 넣기
    worth.append(int(input()))

dp=[0]*(k+1) #k+1까지 빈 리스트 생성
dp[0] =1

for i in worth:
    for j in range(1,k+1):
        if j-i>=0:
            dp[j]+=dp[j-1]

print(dp[k])

#모르겠음,,,,