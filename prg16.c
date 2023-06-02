#include <stdio.h>

int main()
{
    int sinal = 1;
    float n, i;
    float res = 0;

    scanf("%f", &n);

    for (i = 1; i <= n; i++)
    {
        sinal = sinal * -1;
        res = res + ((1 / i) * sinal);
    }
    printf("%.2f", res);

    return 0;
}