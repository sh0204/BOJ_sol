s = input() #문자열 입력
alpha =[0]*26 #소문자 갯수 26개

for i in s:
    alpha[ord(i)-97] +=1

for i in alpha:
    print(i, end=" ")