#include <stdio.h>
int main()
{
    int n1, i;

    printf("Coloque aqui um número: \n");
    scanf("%d", &n1);

    for(i=n1; i>0 ;i--)
    {
        printf("%d ", i);
    }

    return 0;
}