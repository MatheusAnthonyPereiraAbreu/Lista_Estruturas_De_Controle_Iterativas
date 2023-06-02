#include <stdio.h>

int main()
{
    int n, i, res = 0, sinal = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        res = res + (i * sinal);
        sinal = sinal * -1;
    }

    printf("%d", res);
    return 0;
}