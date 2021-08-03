a = [1,0]
b = [0,1]

for i in range(2,46):
    a.append(a[i-1]+a[i-2])
    b.append(b[i-1]+b[i-2])

k = int(input())

print(a[k], b[k])
