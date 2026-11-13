#include <stdio.h>

int main(void)
{
    int n;
    long num = 0;
    scanf("%d", &n);
    if (n < 0) {
        printf("NG\n");
    } else {
        for (int i = 1; i <= n; i++) {
            num += i;
        }
        printf("%ld\n", num);
    }
    return 0;
}