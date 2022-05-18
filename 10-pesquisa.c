#include <stdio.h>
#include <stdlib.h>

void main() {
    printf("Insira as 20 idades:\n");

    int menores = 0;
    int adultos = 0;
    int idosos = 0;

    int i;
    for (i = 0; i < 20; i++) {
        int idade;
        scanf("%d", &idade);

        if (idade < 18) {
            menores += 1;
        } else if (idade < 60) {
            adultos += 1;
        } else {
            idosos += 1;
        }
    }

    printf("Resultados:\n");
    printf(" - %d menores de 18 anos\n", menores);
    printf(" - %d entre 18 e 60 anos\n", adultos);
    printf(" - %d maiores de 60 anos\n", idosos);

}
