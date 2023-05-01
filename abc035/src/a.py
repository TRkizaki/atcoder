w, h = map(int, input().split())

if w * 3 == h * 4:
    ans = "4:3"
elif w * 9 == h * 16:
    ans = "16:9"
else:
    raise ValueError("Unreachable code")

print(ans)