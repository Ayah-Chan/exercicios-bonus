#include <stdio.h>
#include <stdlib.h>

void main() {
    int tabuada;

    for (tabuada = 1; tabuada <= 10; tabuada++) {
        printf("Tabuada do %d:\n", tabuada);

        int i;

        for (i = 1; i <= 10; i++) {
            int resultado = tabuada * i;
            printf("%d x %d = %d\n", tabuada, i, resultado);
        }

        printf("\n");
    }
}
