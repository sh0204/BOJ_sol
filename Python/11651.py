n = int(input())

arr =[]

for i in range(n):
    x,y=map(int,input().split())
    arr.append([y,x]) #리스트에 저장할때 y,x로 저장

arr.sort() #y를 기준으로 정렬

for i in arr:
    print(i[1],i[0]) #출력은 x,y


