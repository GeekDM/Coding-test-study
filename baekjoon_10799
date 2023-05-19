A = input()
num = 0
stack = []
for i in range(len(A)):
    if A[i] == '(':
        stack.append(A[i])
    else :
        if A[i-1] == '(':
            stack.pop()
            num += len(stack)
        else:
            stack.pop()
            num += 1
print(num)
