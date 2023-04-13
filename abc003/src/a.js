n = int(input())
sum = 0
for x in range(1, n+1):
    sum += x * 10000
ans = sum / n
print(ans)