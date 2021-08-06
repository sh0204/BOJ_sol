a, b = list(input().split())
min = len(a)

for i in range(len(b)-len(a)+1):
    cnt =0
    for j in range(len(a)):
        if a[j] != b[i+j]:
            cnt+=1
    if cnt<min:
        min = cnt
print(min)
