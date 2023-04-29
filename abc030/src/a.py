a, b, c, d = map(int, input().split())
if b * c == d * a:
    ans = "DRAW"
elif b * c > d * a:
    ans = "TAKAHASHI"
else:
    ans = "AOKI"
print(ans)