a, b, c = map(int, input().split())
ans = a + b == c or a + c == b or a == b + c
if ans:
    print("Yes")
else:
    print("No")