while True:
    length = list(map(int,input().split()))
    #변의 길이의 합이 0이면 종료
    if sum(length) == 0:
        break

    Max = max(length) #가장 긴 변의 길이
    length.remove(Max)
    if(length[0]**2+length[1]**2 == Max**2):
        print('right')
    else:
        print('wrong')
