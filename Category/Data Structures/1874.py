import sys
n = int(sys.stdin.readline())
arr =[]     #입력값 순서대로 담을 배열
stack=[]    #스택으로 활용
ans=[]      #push,pop기록

for _ in range(n):
    arr.append(int(input())) #n개 인풋 배열에 저장

index = 1

for i in range(n):
    if arr[i] >= index:
        while index <= arr[i]:
            stack.append(index)
            ans.append("+")
            index+=1
        stack.pop()
        ans.append('-')
    else:
        if len(stack)!=0 and stack[-1] == arr[i]:
            stack.pop()
            ans.append('-')

if len(stack) != 0:
    print("NO")
else:
    for i in ans:
        print(i)