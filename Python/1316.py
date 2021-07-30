n = int(input())
count = n

for _ in range(n):
    word = input()
    for i in range(len(word)-1): #인덱스 범위 설정 0부터 단어갯수-1까지
        if(word[i] != word[i+1]): #뒤에 글자랑 다를 경우
            if word[i] in word[i+1 :]: #남은 문자열에서 현재 글자가 있으면
                count-=1
                break
print(count)
