A = input()
answer = 0
num = 1
stack = []
for i in range(len(A)):
    if A[i] == '(':
        stack.append(A[i])
        num *= 2
    elif A[i] == '[':
        stack.append(A[i])
        num *= 3
    elif A[i] == ')':
        if A[i-1] == '(':
            answer += num
        elif stack[-1] == '[':
            answer = 0
            break
        stack.pop()
        num //= 2
    elif A[i] == ']':
        if A[i-1] == '[':
            answer += num
        elif stack[-1] == '(':
            answer = 0
            break
        stack.pop()
        num //= 3
print(answer)
