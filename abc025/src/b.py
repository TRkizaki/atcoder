n, a, b = map(int, input().split())
sd = []
for i in range(n):
    s_i, d_i = input().split()
    sd.append((s_i, int(d_i)))

c = 0
for s_i, d_i in sd:
    x = max(min(int(d_i), b), a)
    if s_i == "E":
        d = x
    elif s_i == "W":
        d = -x
    else:
        raise ValueError("Invalid direction")
    c += d

ans = c
if ans == 0:
    print(0)
else:
    print("East" if ans > 0 else "West", abs(ans))