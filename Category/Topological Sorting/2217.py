N = int(input())
rope = []

for _ in range(N): #로프 중량
    rope.append(int(input()))

rope.sort(reverse=True) #내림차순 정렬

result = []
for i in range(len(rope)):
    result.append(rope[i]*(i+1))

print(max(result))
