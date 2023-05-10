from typing import List

abc: List[int] = list(map(int, input().split()))
ans: int = len(set(abc))
print(ans)