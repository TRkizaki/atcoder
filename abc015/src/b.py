n = int(input())
a = list(map(int, input().split()))
count = len([a_i for a_i in a if a_i != 0])
s = sum(a)
ans = (s + count - 1) // count
print(ans)
