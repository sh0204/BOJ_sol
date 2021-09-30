import math
N = int(input())

arr = list(map(int, str(N)))
res= 0

for i in range(0,len(arr)):
    res += arr[i]**5

print(res)