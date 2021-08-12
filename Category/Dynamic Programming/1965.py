n = int(input())
box = list(map(int,input().split()))

#dp 초기화 
dp =[1 for _ in range(n+1)]

for i in range(1,n):
    for j in range(i): 
        #현재 상자 보다, 앞에 있는 상자가 작을때,
        if box[i]>box[j]:
            # 상자수+1 과 비교해서 큰 값을 dp에 저장
            dp[i] = max(dp[i],dp[j]+1)
#dp 중 max값 출력
print(max(dp))