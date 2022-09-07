#25304 영수증

x = int(input())
n = int(input())

sum = 0
#가격 a, 개수 b
for _ in range(n):
  a, b = map(int,input().split())
  sum += a*b

if sum == x:
  print("Yes")
else:
  print("No")
