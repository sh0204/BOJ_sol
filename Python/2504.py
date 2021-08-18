s= list(input())
stack =[]

for i in s:
    if i ==')':
        tmp = 0

        while stack:
            top = stack.pop()
            if top =='(':
                if tmp==0:
                    stack.append(2)
                else:
                    stack.append(2*tmp)
                break
            elif top == '[':
                print(0)
                exit(0)
            else:
                if tmp ==0:
                    tmp = int(top)
                else:
                    tmp = tmp + int(top)
    elif i==']':
        tmp =0
        while stack:
            top = stack.pop()
            if top =='[':
                if tmp==0:
                    stack.append(3)
                else:
                    stack.append(3*tmp)
                break
            elif top == '(':
                print(0)
                exit(0)
            else:
                if tmp ==0:
                    tmp = int(top)
                else:
                    tmp = tmp + int(top)
    else:
        stack.append(i)

result =0

for i in stack:
    if i =='(' or i=='[':
        print(0)
        exit(0)
    else:
        result += i

print(result)