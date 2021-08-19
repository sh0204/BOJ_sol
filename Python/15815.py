from collections import deque

s = input()
d = deque()

for i in range(len(s)):
    try:
        d.append(int(s[i]))

    except: 
        if s[i] =='+':
            ans = (d.pop()+d.pop())
        elif s[i] =='-':
            op1 = d.pop()
            op2 = d.pop()
            ans =(op2-op1)

        elif s[i] == '*':
            ans = d.pop()*d.pop()

        elif s[i] =='/':
            op1 = d.pop()
            op2 = d.pop()
            ans = op2 //op1
        
        d.append(ans)

print(d.pop())