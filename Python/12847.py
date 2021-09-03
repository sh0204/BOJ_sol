import sys
input = sys.stdin.readline

n,m = map(int, input().split())
money = list(map(int,input().split()))

work = m #일할 수 있는 날
search = sum(money[:work]) #일할 수 있는 날만큼의 합
ans = search

#처음에 처음부터 m개의 수를 더함
#인덱스 m부터 n까지 순차적으로 탐색
#현재 나오는 수를 search에 더함 -> search에 맨 처음에 더한 값 뺌
#현재 ans와 비교 -> ans 갱신

for i in range(work, n):
    search += money[i] - money[i-work]
    ans = max(ans, search)

print(ans)