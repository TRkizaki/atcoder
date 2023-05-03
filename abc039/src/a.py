import sys

a, b, c = map(int, sys.stdin.readline().split())

ans = ((a * b) + (b * c) + (c * a)) * 2
print(ans)