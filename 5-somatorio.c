#include <stdio.h>
#include <stdlib.h>

void main() {
    int n;

    printf("Digite o valor de N:\n");
    scanf("%d", &n);

    float s = 0;
    int i;

    for (i = 1; i <= n; i++) {
        s += 1 / (float)i;
    }

    printf("S = %f\n", s);
}
