dia = ['ABC','DEF','GHI','JKL','MNO','PQRS','TUV','WXYZ']
word = input()

time = 0

for i in word:
    for j in dia:
        #입력값이 dia에 있으면
        #abc인덱스가 0인데 걸리는 시간은 3초니까 인덱스에 3씩 더해주면 됨
        if i in j:
            time += dia.index(j)+3

print(time)