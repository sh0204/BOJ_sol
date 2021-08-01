n = int(input())
person = []

for i in range(n):
   age,name = map(str,input().split())
   age = int(age) #나이는 형변환 해줌
   person.append((age,name)) #리스트에 튜플로(나이,이름)이 저장

person.sort(key=lambda x : int(x[0]))  #나이순 정렬

for i in range(n):
    print(person[i][0],person[i][1])