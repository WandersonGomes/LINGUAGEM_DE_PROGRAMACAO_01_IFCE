/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.2
Elabore um algoritmo que receba 2 valores inteiros 
e troque-os de posição. Por fim mostre o antes e o 
depois da troca dos valores.

Obs.: 
O metodo 2 foi descoberto no seguinte link:
https://pt.stackoverflow.com/questions/16373/como-trocar-o-valor-entre-duas-variaveis-sem-utilizar-variavel-auxiliar
*/
#include <stdio.h>

int main() {
    int numero1 = 0, numero2 = 0;
    int aux = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
    printf("\n");

    //metodo 1 - com aux
    printf("VALORES ANTES DA TROCA\n");
    printf("NUMERO 1: %d\n", numero1);
    printf("NUMERO 2: %d\n", numero2);
    printf("\n");

    aux = numero1;
    numero1 = numero2;
    numero2 = aux;

    printf("VALORES DEPOIS DA TROCA - METODO 01\n");
    printf("NUMERO 1: %d\n", numero1);
    printf("NUMERO 2: %d\n", numero2);
    printf("\n");

    //metodo 2 - sem aux
    printf("VALORES ANTES DA TROCA\n");
    printf("NUMERO 1: %d\n", numero1);
    printf("NUMERO 2: %d\n", numero2);
    printf("\n");

    numero1 ^= numero2;
    numero2 ^= numero1;
    numero1 ^= numero2;

    printf("VALORES DEPOIS DA TROCA - METODO 02\n");
    printf("NUMERO 1: %d\n", numero1);
    printf("NUMERO 2: %d\n", numero2);
    printf("\n");
    
    return 0;
}