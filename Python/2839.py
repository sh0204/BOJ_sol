sugar = int(input())
bag = 0

while sugar >=0:     #최대한 적은 수의 봉지 -> 5의배수로 만들어주기
    if(sugar%5) ==0: #5의 배수이면
        bag += (sugar//5) #몫
        print(bag)
        break
    sugar -=3
    bag +=1
else:
    print(-1)
