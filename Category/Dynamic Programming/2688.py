import sys 
input = sys.stdin.readline 

T = int(input())

for i in range(T):
    N = int(input()) 
    num = [1 for i in range(10)] 

    #2자리 수에 0,1,2 넣을 때 가능한 것이 00 01 11 02 12 22
    #3자리 수에서 2가 들어가는 경우 002 012 112 022 122 222 
    # 즉 각 배열의 현재 인덱스 이상의 원소 값 모두 더해주면 된다.

    for i in range(N-1):
        for j in range(10):
            num[j] = sum(num[j:])
    print(sum(num))
