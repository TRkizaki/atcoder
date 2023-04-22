abc = list(map(int, input().split()))
values = [(v, abc) for abc, v in enumerate(abc)]
values.sort(reverse=True)
with_rank = [(abc, i+1) for i, (_, abc) in enumerate(values)]
with_rank.sort()
for _, r in with_rank:
    print(r)
