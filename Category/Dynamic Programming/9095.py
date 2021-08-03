sum =[0,1,2,4]
for i in range(4,12):
    sum.append(sum[i-1]+sum[i-2]+sum[i-3])

    
T = int(input())
for i in range(T):
    n = int(input())
    print(sum[n])


