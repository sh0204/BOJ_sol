x= int(input())

line =0
last_indx =0

while x > last_indx:

    line+=1  #line=1,2,3,4,...
    last_indx += line

gap = last_indx-x

if line%2 == 0: #짝수라인이면
    ja = line-gap
    mo = gap+1

else: #홀수라인이면
    ja = gap+1
    mo = line-gap

print("%d/%d"%(ja,mo))