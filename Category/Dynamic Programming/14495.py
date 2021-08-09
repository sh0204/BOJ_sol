fibo=[1]*117
n = int(input())

for i in range(4,n+1):
    fibo[i]=fibo[i-1]+fibo[i-3]

print(fibo[n])
