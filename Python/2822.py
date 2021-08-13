score = [int(input())for _ in range(8)]
#내림차순 정렬
score_ = sorted(score, reverse=True)
#다섯번째 큰 수 까지 더해줌
total = sum(score_[:5])

index=[]
for i in range(5):
    index.append(score.index(score_[i])+1)
index.sort()

print(total)
for i in index:
    print(i,end=' ')

