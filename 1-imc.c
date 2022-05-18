#include <stdio.h>
#include <stdlib.h>

void main() {
    int peso, altura;

    printf("Digite o peso (kg):\n");
    scanf("%d", &peso);

    printf("Digite a altura (cm):\n");
    scanf("%d", &altura);

    float alturaMetro = altura / 100.0;
    float imc = peso / (alturaMetro * alturaMetro);

    printf("O seu IMC eh de %.2f\n", imc);
}
