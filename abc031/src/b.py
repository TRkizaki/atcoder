l, h, n = map(int, input().split())
a = list(map(int, input().split()))

for a_i in a:
    if a_i < l:
        print(l - a_i)
    elif h < a_i:
        print("-1")
    else:
        print("0")