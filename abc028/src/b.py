from collections import defaultdict

s = input().strip()
freq = defaultdict(int)

for c in s:
    freq[c] += 1

print(" ".join(str(freq[c]) for c in "ABCDEF"))
