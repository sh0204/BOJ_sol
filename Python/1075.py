N = int(input())
F = int(input())

ans = N - (N%100)

for i in range(100):
    if(ans+i) % F == 0:
        print('{:02d}'.format(i))
        break