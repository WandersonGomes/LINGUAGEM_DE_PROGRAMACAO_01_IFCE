/*
Elabore um algoritmo que receba dois numeros inteiros e verifique
qual o maior e o menor entre eles.
*/
#include <stdio.h>

int main() {
    int numero1 = 0, numero2 = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero1);
    printf("Informe um outro numero inteiro: ");
    scanf("%d", &numero2);

    (numero1 >= numero2) ? printf("O MAIOR NUMERO E: %d\nO MENOR NUMERO E: %d\n", numero1, numero2) : printf("O MAIOR NUMERO E: %d\nO MENOR NUMERO E: %d\n", numero2, numero1);

    return 0;
}