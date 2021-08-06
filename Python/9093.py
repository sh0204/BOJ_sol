T = int(input())

for _ in range(T):
    s = list(input().split())
    for i in s:
        print("".join(reversed(list(i))) ,end=" ")
    print()