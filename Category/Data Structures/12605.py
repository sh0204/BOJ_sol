from collections import deque

n = int(input())
for case in range(n):

    stack = deque(input().split())
    print(f"Case #{case+1}: ", end='')
    
    while len(stack) > 1:
        print(stack.pop(), end= ' ')
    print(stack.pop())