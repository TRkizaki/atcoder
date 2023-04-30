n = int(input())
sp = []
for i in range(n):
    s, p = input().split()
    sp.append((s, int(p)))

# loop through the list and add up all the populations
sum = sum(p for _, p in sp)

for s, p in sp:
    if p > sum // 2:
        print(s)
        break
else:
    print("atcoder")