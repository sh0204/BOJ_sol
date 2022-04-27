# #순서 바꾸기 -> 슬라이스 기능
# #배열 순서 뒤집을 땐 [::-1] 이용

card = [i for i in range(1,21)]
for _ in range(10):
    a,b = map(int,input().split())
    #인덱스 0부터 시작하려고
    a-=1
    #리스트에서 index a부터 b까지 잘라서 리스트로 반환
    #[::-1] -> 역으로 뒤집
    card[a:b] = card[a:b][::-1]
    
for i in card:
    print(i, end = ' ')

