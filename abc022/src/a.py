def main():
    n = int(input())
    s, t, w = map(int, input().split())
    a = [int(input()) for _ in range(n - 1)]
    c = w
    count = 1 if s <= c <= t else 0
    for a_i in a:
        c += a_i
        if s <= c <= t:
            count += 1
    ans = count
    print(ans)


if __name__ == '__main__':
    main()
