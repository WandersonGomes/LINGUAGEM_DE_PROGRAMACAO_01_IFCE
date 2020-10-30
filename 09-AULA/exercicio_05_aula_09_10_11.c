/*
Construa um algoritmo que receba um numero inteiro e informar que
dia da semana ele representa. Caso esteja fora da faixa retornar
mensagem de erro.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 7) {
        printf("Error: o numero informado nao pode ser convertido para um dia da semana!\n");
    } else {
        if (numero == 1)
            printf("DOMINGO\n");
        if (numero == 2)
            printf("SEGUNDA-FEIRA\n");
        if (numero == 3)
            printf("TERCA-FEIRA\n");
        if (numero == 4)
            printf("QUARTA-FEIRA\n");
        if (numero == 5)
            printf("QUINTA-FEIRA\n");
        if (numero == 6)
            printf("SEXTA-FEIRA\n");
        if (numero == 7)
            printf("SABADO\n");
    }

    return 0;
}