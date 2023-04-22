def main():
    a, b = map(int, input().split())
    d = a % b
    ans = 0 if d == 0 else b - d
    print(ans)


if __name__ == '__main__':
    main()
