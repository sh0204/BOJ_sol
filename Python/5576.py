w =[]
k =[]
for _ in range(10):
    w.append(int(input()))
    w.sort()

for _ in range(10):
    k.append(int(input()))
    k.sort()

print(sum(w[7:]),sum(k[7:]))