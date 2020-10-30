/*
Leia um numero para verificar se ele e maior do que 20. Caso
afirmativo imprima a metade desse numero. Caso contrario imprima
o seu quadrado.
*/
#include <stdio.h>

int main() {
    float numero = 0.0;

    printf("Informe um numero: ");
    scanf("%f", &numero);

    if (numero > 20) {
        printf("A medade %g e: %g\n", numero, (numero/2.0));
    } else {
        printf("O quadrado de %g e: %g\n", (numero*numero));
    }

    return 0;
}