word = input().upper() #입력 값을 모두 대문자로 
word_list = list(set(word)) # set: 자료형의 중복을 제거
cnt =[] #알파벳 저장

for i in word_list:
    num = word.count(i) #각 알파벳의 갯수를 센다.
    cnt.append(num) #리스트에 알파벳 갯수를 넣어준다.

if cnt.count(max(cnt)) >=2:  #cnt 값이 겹치면
    print("?")
else:
    Max_index = cnt.index(max(cnt))  #cnt 숫자 최대값의 위치
    print(world_list[Max_index])
