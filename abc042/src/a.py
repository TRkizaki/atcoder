abc = list(map(int, input().split()))
abc.sort()
ans = abc == [5, 5, 7]
print("YES" if ans else "NO")