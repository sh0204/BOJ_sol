import sys
input = lambda : sys.stdin.readline().strip()

n,p = map(int, input().split())
a = [list(map(int, input().split()))for i in range(n)]

move = 0 #움직인 횟수
stack = [[] for _ in range(7)] #음계 저장할 스택

for line, fret in a:
    if len(stack[line])==0:
        stack[line].append(fret)
        move += 1

    else:
        if fret > stack[line][-1]:
            stack[line].append(fret)
            move += 1
        elif fret == stack[line][-1]: #이미 있는 경우
            continue
        else:
            while len(stack[line]) != 0 and fret < stack[line][-1]:
                stack[line].pop()
                move+=1
            if len(stack[line])!=0 and stack[line][-1] == fret:
                continue
            stack[line].append(fret)
            move +=1
print(move) 

