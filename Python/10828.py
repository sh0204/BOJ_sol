import sys
input=sys.stdin.readline

n = int(input())
stack = []

def push(x):
    #stack에 추가
    stack.append(x)

def pop():
    if(len(stack)==0): #스택이 비었을 경우
        print(-1)
    else:
        print(stack.pop())

def size():
    print(len(stack))

def empty():
    if(len(stack)==0): #비었을 때
        print(1)
    else: #안 비었을 때
        print(0)

def top():
    if(len(stack)==0): #스택이 비었을 때
        print(-1)
    else:
        print(stack[-1])

for _ in range(n):
    order=input().split() #명령어 분리
    if(order[0]=='push'):
        push(order[1])
    elif(order[0]=='pop'):
        pop()
    elif(order[0]=='size'):
        size()
    elif(order[0]=='empty'):
        empty()   
    elif (order[0] == 'top'):
        top()

    
    