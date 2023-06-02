#include <stdio.h>

int main()
{
    int i, n1;
    float den = 1, num = 1, res, sum = 0;

    printf("Insira um numero: \n");
    scanf("%d", &n1);

    for (i = 1; i <= n1; i++)
    {
        res = (num / den);
        if (i % 4 == 1 || i % 4 == 2)
        {
            sum += res;
        }
        else
        {
            sum -= res;
        }

        num += 2;
        den += 1;
    }
    printf("%.2f", sum);
    return 0;
}