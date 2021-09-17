a = 1000 - int(input())
b = [500, 100, 50, 10, 5, 1]
cnt= 0
for i in b:
    cnt += a // i
    a %= i
print(cnt)