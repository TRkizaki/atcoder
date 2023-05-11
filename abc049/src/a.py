c = input().strip()
ans = any(x == c for x in "aeiou")
print("vowel" if ans else "consonant")