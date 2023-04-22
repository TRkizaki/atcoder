a, b, c = map(int, input().split())
p = a + b == c
m = a - b == c
if p and m:
    ans = '?'
elif p and not m:
    ans = '+'
elif not p and m:
    ans = '-'
else:
    ans = '!'
print(ans)