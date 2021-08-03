n = int(input())
R,G,B = 0,1,2

#각 집 마다 색깔별 가격 
RGB = [list(map(int, input().split()))for i in range(n)]

#같은 색 연달아 불가
#현재가 R이면 GB 중 작은 값으로 

#  RGB[i][R] = i번째 집을 R
#  RGB[i][G] = i번째 집을 G
#  RGB[i][B] = i번째 집을 B

for i in range(1,n):
    RGB[i][R]=RGB[i][R]+min(RGB[i-1][G],RGB[i-1][B])
    RGB[i][G]=RGB[i][G]+min(RGB[i-1][R],RGB[i-1][B])
    RGB[i][B]=RGB[i][B]+min(RGB[i-1][G],RGB[i-1][R])

#빨강, 초록, 파랑으로 칠하는 경우 중 최소값 출력
print(min(RGB[n-1]))