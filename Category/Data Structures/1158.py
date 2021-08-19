import sys
n,k = map(int, sys.stdin.readline().split())
num=[i for i in  range(1,n+1)]
ans = []
tmp =k-1

for i in range(n):
    #위치가 리스트 안넘을 때
    if len(num)>tmp:
        ans.append(num.pop(tmp))
        #tmp번째 숫자 제거, k-1만큼 다음 수 시작
        tmp += k-1
    
    #위치가 리스트 넘을 때
    elif len(num) <= tmp:
        tmp = tmp%len(num)
        ans.append(num.pop(tmp))
        #tmp번째 숫자 제거, k-1만큼 다음 수 시작
        tmp += k-1

print('<',end='')
for i in ans:
    if i==ans[-1]:print(i,end='')
    else: print("%s, "%(i),end='')
print('>',end='')