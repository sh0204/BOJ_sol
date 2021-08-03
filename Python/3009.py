xlist=[]
ylist=[]

for i in range(3):
    x,y = map(int,input().split())
    xlist.append(x)
    ylist.append(y)

for i in range(3):
    if xlist.count(xlist[i]) ==1:
        point_x = xlist[i]
    if ylist.count(ylist[i]) ==1:
        point_y=ylist[i]

print(point_x,point_y)