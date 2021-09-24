N = int(input())

zoo = [1 for _ in range(N+1)]  #초기화
zoo[1] = 3

if N == 1:
    print(zoo[1])

else:
    for i in range(2, N+1):
        zoo[i] = (2*zoo[i-1])+zoo[i-2]
        zoo[i]%= 9901
    #규칙을 찾으면
    # zoo[0]=1 하나도 배치하지 않는 경우
    # zoo[1]=3 하나도 배치하지 않은 경우 + 왼쪽만 + 오른쪽만
    # zoo[2]=7 zoo[3]=17 zoo[4]=41이다.
    print(zoo[N])
