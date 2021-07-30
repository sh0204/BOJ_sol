alpa = input()
cro =['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

for i in cro:
    alpa = alpa.replace(i,'!') 
    #a입력받은 문자열에 cro 안에 있는 알파벳을 찾아서 !로 바꿔준다.
print(len(alpa))
