a, op, b = input().split()
a, b = int(a), int(b)

if op == '+':
    ans = a + b
elif op == '-':
    ans = a - b
else:
    raise ValueError("Invalid operator: {}".format(op))

print(ans)
