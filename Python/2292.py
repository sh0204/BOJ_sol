num = int(input())

wax=1 #방 1개 지나는 숫자 부터 시작 = 1번방
cnt =1

while num > wax:
    wax += 6 * cnt  #벌집이 6의 배수로 증가
    cnt +=1 #반복문 반복

print(cnt)