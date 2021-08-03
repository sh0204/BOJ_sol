zero = [1,0,1]
one = [0,1,1]

for i in range(3,41):
    zero.append(zero[i-1]+zero[i-2])
    one.append(one[i-1]+one[i-2])


test = int(input())

for i in range(test):
    n = int(input())
    print(zero[n], one[n])
