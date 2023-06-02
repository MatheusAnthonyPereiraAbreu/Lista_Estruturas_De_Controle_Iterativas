#include <stdio.h>

int main() {
    int n = 0, cont = 0;
    float som = 0,med;

    while (n >= 0) {
        scanf("%d", &n);

        if (n >= 0) {
            som += (float)n;
            cont++;
        }
    }
    med=som/cont;
    printf("%.1f", med);

    return 0;
}