a = int(input())
max_v = 0
for x in range(1, a):
    y = a - x
    max_v = max(max_v, x * y)
ans = max_v
print(ans)