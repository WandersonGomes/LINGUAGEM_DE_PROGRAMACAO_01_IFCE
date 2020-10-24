/*
INSTITUICAO: IFCE - CAMPUS TIANGUA - CE
CURSO: BACHARELADO EM CIENCIA DA COMPUTACAO
SEMESTRE: 2020.2
ALUNO: WANDERSON GOMES DA COSTA
DISCIPLINA: LINGUAGEM DE PROGRAMACAO I
PROFESSOR: RHYAN XIMENES DE BRITO

EXERCICIO 05:
Elabore um algoritmo que receba dois números inteiros e verifique qual o maior e o menor entre eles. 
Obs. Utilizar a estrutura do operador ternário. 
*/
#include <stdio.h>

int main() {
    int numero1 = 0, numero2 = 0;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &numero2);

    (numero1 > numero2) ? printf("\nO MAIOR NUMERO E: %d\nO MENOR NUMERO E: %d\n", numero1, numero2) : printf("\nO MAIOR NUMERO E: %d\nO MENOR NUMERO E: %d\n", numero2, numero1);

    return 0;
}