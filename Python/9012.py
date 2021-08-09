n = int(input())
arr = []

for i in range(n):
    test = input()
    cnt = 0

    for ch in test:
        if cnt < 0:
            break
        if ch == '(':
            cnt +=1
        elif ch == ')':
            cnt -=1

    if cnt != 0:
        arr.append("NO")
    else:
        arr.append("YES")

for answer in arr:
    print(answer)
