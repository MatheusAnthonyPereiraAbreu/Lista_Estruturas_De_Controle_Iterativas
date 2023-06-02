#include <stdio.h>

int main()
{
    int x, i, res = 0, res1 = 0, prod, sub;

    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {
        res = (res + i);
    }

    res = (res * res);

    for (i = 1; i <= x; i++)
    {
        prod = i * i;
        res1 = (res1 + prod);
    }
    sub = res - res1;

    printf("%d", sub);
    return 0;
}