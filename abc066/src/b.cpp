// 4 ms	1696 KB
#include <cstdio>
#include <cstring>

int main()
{
    char str[222];
    scanf("%s", str);
    int n = strlen(str);
    for (int i = n - 2; i; i -= 2) {
        if (strncmp(str, str + i / 2, i / 2) == 0) {
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}
