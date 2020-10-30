/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 03:
Faça um algoritmo para ajudar a bilheteria do metrô. O operador deve 
informar o tipo do bilhete (unitário, duplo ou 10 viagens) e o valor 
pago pelo passageiro. O sistema deverá mostrar a quantidade de 
bilhetes possíveis e o troco que o passageiro deve receber. 
Considar a seguinte tabela de preço: 
    Bilhete unitário---1,60; 
    Bilhete duplo----3,20; 
    Bilhete triplo..........4,80; 
    Bilhete de 10 viagens .........15,00.

    Obs1. O algoritmo utilizará um laço de repetição para x passageiros 
    informados no início do programa; 
    Obs2. Validar os dados. 
    Obs3. Usar o laço for.
*/
#include <stdio.h>

int main() {
    int numero_passageiros = 0, i = 0;
    int tipo_bilhete = 0, qtd_bilhetes = 0;
    float valor_pago = 0.0, troco = 0.0, limite_inferior = 0.0;

    do {
        printf("Informe o numero de passageiros (maior do que 0): ");
        scanf("%d", &numero_passageiros);
        if (numero_passageiros < 1) {
            printf("Error: numero invalido!\nTente novamente.\n");
        }
    } while (numero_passageiros < 1);

    for (i = 0; i < numero_passageiros; i++) {
        do {
            printf("Informe o tipo de bilhete:\n");
            printf("1 - Bilhete unitario - R$ 1.60\n");
            printf("2 - Bilhete duplo - R$ 3.20\n");
            printf("3 - Bilhete triplo - R$ 4.80\n");
            printf("4 - Bilhete de 10 viajens - R$ 15.00\n");
            printf("Informe sua opcao: ");
            scanf("%d", &tipo_bilhete);
            if (tipo_bilhete < 1 || tipo_bilhete > 4) {
                printf("Tipo de bilhete invalido!\nTente novamente.\n");
            }
        } while (tipo_bilhete < 1 || tipo_bilhete > 4);

        switch (tipo_bilhete) {
            case 1: limite_inferior = 1.60; break;
            case 2: limite_inferior = 3.20; break;
            case 3: limite_inferior = 4.80; break;
            case 4: limite_inferior = 15.00; break;
        }

        do {
            printf("Informe o valor pago pelo passageiro: ");
            scanf("%f", &valor_pago);
            if (valor_pago < limite_inferior) {
                printf("Error: valor invalido!\nTente novamente.\n");
            }
        } while (valor_pago < limite_inferior);

        while ((qtd_bilhetes * limite_inferior) <= valor_pago) {
            qtd_bilhetes++;
        }
        qtd_bilhetes--;

        troco = valor_pago - (qtd_bilhetes * limite_inferior);

        printf("\nA quantidade de bilhetes para o passageiro eh: %d ", qtd_bilhetes);
        switch (tipo_bilhete) {
            case 1: printf("bilhete(s) unitario(s)\n"); break;
            case 2: printf("bilhete(s) duplos(s)\n"); break;
            case 3: printf("bilhete(s) triplo(s)\n"); break;
            case 4: printf("bilhete(s) de 10 viajens\n"); break;
        }
        printf("O troco para o passageiro eh: %.2f\n", troco);
    }

    return 0;
}