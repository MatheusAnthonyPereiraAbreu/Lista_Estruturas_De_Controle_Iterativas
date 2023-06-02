#include <stdio.h>

int main ()
{
    int n1=0,i;

    printf("Insira aqui um número: \n");
    scanf("%d", &n1);
    
    while(n1<0)
    {
        scanf("%d", &n1);
    }

    for (i=0;i<=n1;i++)
    {
        printf("%d ", i);
    }

    return 0;
}