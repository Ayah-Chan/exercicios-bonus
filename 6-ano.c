#include <stdio.h>
#include <stdlib.h>

void main() {
    int ano;

    printf("Digite o ano:\n");
    scanf("%d", &ano);

    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        printf("O ano eh bisexto\n");
    } else {
        printf("O ano nao eh bisexto\n");
    }
}
