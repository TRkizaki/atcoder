a, b, n = map(int, input().split())

for x in range(n, 2 * n):
    if x % a == 0 and x % b == 0:
        print(x)
        break