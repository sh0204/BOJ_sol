n = int(input())
arr =[]

for _ in range(n):
    student =input().split()
    #name을 제외한 나머지 int형으로 변환
    student [1:] =map(int, student[1:])
    #학생 정보 arr 리스트에 넣어줌
    arr.append(student)
    
arr.sort(key =lambda student: (student[3],student[2],student[1]))
#나이가 제일 적은 사람
print(arr[-1][0])    
#나이가 제일 많은 사람
print(arr[0][0])