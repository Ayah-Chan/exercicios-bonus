#include <stdio.h>
#include <stdlib.h>

void main() {
    int valor;

    printf("Digite o valor do carro:\n");
    scanf("%d", &valor);

    int parcelas;

    printf("\n");
    printf("Preco final | Parcelas | Valor por parcela\n");

    for (parcelas = 1; parcelas <= 60; parcelas += 6) {
        int juros;

        if (parcelas == 1) {
            juros = -20;
        } else {
            juros = parcelas / 2;
        }

        double valorTotal = valor + valor * juros / 100.0;
        double valorParcela = valorTotal / parcelas;

        printf("%11.2f | %8d | %17.2f\n", valorTotal, parcelas, valorParcela);

        if (parcelas == 1) {
            parcelas = 0;
        }
    }
}
