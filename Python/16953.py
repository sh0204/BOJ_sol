#B를 A로 바꾸기

A,B = map(int,input().split())
cnt = 1

while True:
    if A == B: #A B 같아질 때까지 반복
        break
    elif A > B:
        cnt = -1
        break
    elif (B%10) == 1:
        B = B//10
        cnt += 1
    elif (B%2) == 0:
        B = B//2
        cnt +=1
    else:
        cnt = -1
        break

print(cnt)
