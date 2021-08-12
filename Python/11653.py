n = int(input())

while n != 1:
    for i in range(2,n+1):
        #나눠지면 출력
        #해당 수로 n 나눠줌
        if(n%i==0):
            print(i)
            n = n//i
            break