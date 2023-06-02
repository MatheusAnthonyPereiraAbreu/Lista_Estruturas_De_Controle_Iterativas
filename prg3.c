#include <stdio.h>

int main()
{
    int i,n1, cont=0;

    printf("Insira um numero: \n");
    scanf("%d", &n1);

    for ( i = 1; cont < n1; i+=2)
    {
        printf("%d ",i);
        cont++;
    }
    
    return 0;
}