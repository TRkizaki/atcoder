def is_aiueo(c):
    return c in ['a', 'i', 'u', 'e', 'o']

w = input()
ans = ''.join(filter(lambda c: not is_aiueo(c), w))
print(ans)