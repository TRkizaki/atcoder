def main():
    a, b = map(int, input().split())
    m, n = b, 0
    while m > 0:
        m //= 10
        n += 1
    ans = (a * 10 ** n + b) * 2
    print(ans)

if __name__ == '__main__':
    main()
