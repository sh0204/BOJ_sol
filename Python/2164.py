import sys 
from collections import deque

n = int(input())
de =deque()

for i in range(n):
    de.append(i+1)
while len(de) >1:
    de.popleft()
    de.append(de.popleft())

print(de.pop())    