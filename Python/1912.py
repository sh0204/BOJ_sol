n=int(input())
arr=list(map(int, input().split()))
sum=[arr[0]] #sum의 0번째 인덱스에 첫 문자 넣어줌

for i in range(len(arr)-1):
   sum.append(max(sum[i]+arr[i+1],arr[i+1])) 
   #sum의 i번째 인덱스와 새로운 숫자를 더한 값과
   #새로운 숫자를 비교했을 때 더 큰 값을 비교해서 리스트에 넣어줌
   

print(max(sum))