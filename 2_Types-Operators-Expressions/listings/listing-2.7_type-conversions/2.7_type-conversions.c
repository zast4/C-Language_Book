#include <stdio.h>

/* atoi: converts s to positive integer */
int atoi(char s[]);

int main() {
    int a = atoi("-1");

    printf("%d", a);

    int c;
    for (c = 'A'; c <= 'z'; ++c)
        printf("%c ", c);
    return 0;
}

int atoi(char s[]) {
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

int lower(int c) {
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else 
        return c;
}