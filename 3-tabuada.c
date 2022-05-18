#include <stdio.h>
#include <stdlib.h>

void main() {
    int tabuada;

    printf("Digite o valor pra fazer a tabuada:\n");
    scanf("%d", &tabuada);

    printf("Tabuada do %d:\n", tabuada);

    int i;

    for (i = 1; i <= 10; i++) {
        int resultado = tabuada * i;
        printf("%d x %d = %d\n", tabuada, i, resultado);
    }
}
