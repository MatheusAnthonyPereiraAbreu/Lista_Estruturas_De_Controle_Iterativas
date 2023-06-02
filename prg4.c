#include <stdio.h>

int main()
{
    int n1 = 0, i, cont = 0, res = 0;

    printf("Insira aqui um número: \n");
    scanf("%d", &n1);

    while (n1 < 0)
    {
        scanf("%d", &n1);
    }

    for (i = 1; cont < n1; i += 2)
    {
        res +=i;
        
        cont++;
    }

   printf("%d ",res);

    return 0;
}