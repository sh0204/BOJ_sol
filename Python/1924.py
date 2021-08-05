month, day = map(int, input().split())

a =[31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
b =["SUN", "MON","TUE", "WED", "THU", "FRI", "SAT"]

cnt =0
for i in range(month-1):
    cnt = cnt+a[i]
cnt = (cnt+day)%7

print(b[cnt])