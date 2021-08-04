#n이 0일때 0개
#n이 1일때 1개
#n이 2일때 1개
pinary =[0,1,1] 

for i in range(3,91):
    pinary.append(pinary[i-2]+pinary[i-1])



n = int(input())
print(pinary[n])