t = int(input())
arr =[]

for i in range(t):
    arr = list(map(int, input().split()))
    arr.sort()
    print(arr[7])