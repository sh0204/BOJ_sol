from sys import stdin

n = int(stdin.readline())
Que = []

for i in range(n) :
    arr = stdin.readline().split()

    if arr[0] == 'push':
        Que.append(arr[1])

    elif arr[0] == 'pop': 
        if Que: 
            print(Que.pop(0))
        else: 
            print(-1)

    elif arr[0] == 'size': 
        print(len(Que))

    elif arr[0] == 'empty' :
        if len(Que) == 0:
            print(1)
        else: print(0)
            
    elif arr[0] == 'front' :
        if len(Que) == 0: 
            print(-1)
        else : print(Que[0])
    
    elif arr[0] == 'back' :
        if len(Que) == 0: 
            print(-1)
        else : print(Que[-1])