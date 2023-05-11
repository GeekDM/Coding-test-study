def cal(num1, operator, num2):          ##Calculator
    if operator == '+':
        return num1 + num2
    elif operator == '-':
        return num1 - num2
    elif operator == '*':
        return num1 * num2
    elif operator == '/':
        return num1 / num2

N = int(input())
formula = input()
stack = []
num = [int(input()) for i in range(N)]

for i in formula:
    if 'A' <= i <= 'Z':
        stack.append(num[ord(i)-65])
    else :
        num2 = stack.pop()
        num1 = stack.pop()
        stack.append(cal(num1, i, num2))

print('%.2f' %stack[-1])
