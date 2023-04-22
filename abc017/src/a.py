
se = [tuple(map(int, input().split())) for _ in range(3)]
ans = sum([s_i // 10 * e_i for s_i, e_i in se])
print(ans)
