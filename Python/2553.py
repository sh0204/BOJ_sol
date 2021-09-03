n = int(input())
fact = 1

for i in range(n):
    fact *= i+1

fact = str(fact)

for find in fact[::-1]:
    if find == '0':
        continue
    else:
        print(find)
        break