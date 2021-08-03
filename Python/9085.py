test = int(input())

for j in range(test):
    n = int(input())
    for i in range(n):
        s = list(map(int, input().split()))
        print(sum(s))
        break