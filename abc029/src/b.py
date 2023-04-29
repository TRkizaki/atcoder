n = 12
s = [list(input().strip()) for _ in range(n)]
ans = sum('r' in s_i for s_i in s)
print(ans)