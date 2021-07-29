def fact(a):
    if a<=1:
        return 1
    else:
        return  fact(a-1)*a

n = int(input())
print(fact(n))