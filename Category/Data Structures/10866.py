import sys
from collections import deque
input=sys.stdin.readline

n = int(input())
dq = deque()

for _ in range(n):
    arr = list(input().split())

    if arr[0] == 'push_front':
        dq.appendleft(arr[1])
    
    elif arr[0] == 'push_back':
        dq.append(arr[1])

    elif arr[0] == 'pop_front':
        if len(dq) ==0:
            print(-1)
        else:
            print(dq.popleft())
    elif arr[0] == 'pop_back':
        if len(dq)==0:
            print(-1)
        else:
            print(dq.pop())
    elif arr[0] == 'size':
        print(len(dq))

    elif arr[0] == 'empty':
        if len(dq) == 0:
            print(1)
        else:
            print(0)
    elif arr[0] == 'front':
        if len(dq) == 0:
            print(-1)
        else:
            print(dq[0])
    elif arr[0] == 'back':
        if len(dq) == 0:
            print(-1)
        else:
            print(dq[-1])