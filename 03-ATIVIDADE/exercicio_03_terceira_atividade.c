/*
INSTITUICAO: IFCE - CAMPUS TIANGUA - CE
CURSO: BACHARELADO EM CIENCIA DA COMPUTACAO
SEMESTRE: 2020.2
ALUNO: WANDERSON GOMES DA COSTA
DISCIPLINA: LINGUAGEM DE PROGRAMACAO I
PROFESSOR: RHYAN XIMENES DE BRITO

EXERCICIO 03:
Construa um algoritmo que receba um número inteiro positivo e retorne se o mesmo é par ou ímpar. 
Obs. Utilizar a estrutura de seleção simples ou composta, ou (simples e composta). 
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Error: valor invalido!\n");
    } else {
        if (numero%2 == 0) {
            printf("\nO NUMERO E PAR\n");
        } else {
            printf("\nO NUMERO E IMPAR\n");
        }
    }

    return 0;
}