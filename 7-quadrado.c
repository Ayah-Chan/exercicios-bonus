#include <stdio.h>
#include <stdlib.h>

void main() {
    int lado;

    printf("Digite o tamanho do lado:\n");
    scanf("%d", &lado);

    int a, b;
    for (a = 0; a < lado; a++) {
        for (b = 0; b < lado; b++) {
            printf("#");
        }
        printf("\n");
    }
}
