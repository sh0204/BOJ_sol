room = input() #방번호
card = [0] * 10 #0~9 카드

for i in range(len(room)):
    num = int(room[i])
    if num == 6 or num == 9:
        if card[6] <= card[9]: #6과 9 중에서 개수가 더 적은 것을 증가 시킴
            card[6] += 1
        else:
            card[9] += 1
    else:
        card[num] += 1
 
print(max(card)) #최대로 인덱스가 많이 증가된 카드를 골라 출력