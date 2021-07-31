c = int(input())

for i in range(c):
    num = list(map(int,input().split()))
    avg = sum(num[1:])/num[0] #num[0]은 학생수 그 이후부터는 점수

    cnt = 0
    
    for score in num[1:]:
        if score>avg:
            cnt += 1

    rate = cnt/num[0]*100
    print(f'{rate:.3f}%')
    