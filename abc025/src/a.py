s = input().strip()
n = int(input())

t = []
for i in range(len(s)):
    for j in range(len(s)):
        t.append([s[i], s[j]])

t.sort()
ans = ''.join(t[n-1])
print(ans)
