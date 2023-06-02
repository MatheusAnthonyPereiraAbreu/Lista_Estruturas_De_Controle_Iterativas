#include <stdio.h>

int main()
{
    int i, cont = 0, den = 1;
    float n, res=0;

    scanf("%f", &n);

    for (i = 0; cont < n; i = i + 2)
    {
        res = res + (i / (float)den);
        den = den * 2;
        cont++;
    }

    printf("%.2f", res);
    return 0;
}