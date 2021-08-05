import math
L = int(input())
A = int(input())
B = int(input())
C = int(input())
D = int(input())

Korea= (math.ceil(A/C))
Math =(math.ceil(B/D))

Day = max(Korea,Math)

print(L-Day)