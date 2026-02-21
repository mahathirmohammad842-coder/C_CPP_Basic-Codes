#include<stdio.h>

int main() {
    int a, s, t, d, count = 0;
    scanf("%d%d%d%d", &a, &s, &t, &d);

    if (a + d >= s && a + d <= t)
        count++;

    printf("%d", count);
    return 0;
}
