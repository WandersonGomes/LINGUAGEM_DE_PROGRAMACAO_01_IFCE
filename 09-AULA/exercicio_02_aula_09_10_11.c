/*
Faca um algoritmo que receba um numero e diga
qual mes do ano ele representa caso contrario
retorne uma mensagem de erro.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    printf("\n");
    if (numero < 1 || numero > 12) {
        printf("O valor informado nao e um numero que pode representar um mes!\n");
    }
    if (numero > 0 && numero < 13) {
        if (numero == 1)
            printf("JANEIRO\n");
        if (numero == 2)
            printf("FEVEREIRO\n");
        if (numero == 3)
            printf("MARCO\n");
        if (numero == 4)
            printf("ABRIL\n");
        if (numero == 5)
            printf("MAIO\n");
        if (numero == 6)
            printf("JUNHO\n");
        if (numero == 7)
            printf("JULHO\n");
        if (numero == 8)
            printf("AGOSTO\n");
        if (numero == 9)
            printf("SETEMBRO\n");
        if (numero == 10)
            printf("OUTUBRO\n");
        if (numero == 11)
            printf("NOVEMBRO\n");
        if (numero == 12)
            printf("DEZEMBRO\n");
    }

    return 0;
}