a, b = map(int,input().split())

arr =[]
arr.append(0)

for i in range(1000):
    for j in range (i):
        arr.append(i)

sum = 0
for i in range(a,b+1):
    sum += arr[i]
print(sum)