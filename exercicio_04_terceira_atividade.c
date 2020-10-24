/*
INSTITUICAO: IFCE - CAMPUS TIANGUA - CE
CURSO: BACHARELADO EM CIENCIA DA COMPUTACAO
SEMESTRE: 2020.2
ALUNO: WANDERSON GOMES DA COSTA
DISCIPLINA: LINGUAGEM DE PROGRAMACAO I
PROFESSOR: RHYAN XIMENES DE BRITO

EXERCICIO 04:
Elabore um algoritmo que receba uma idade e retorne se a mesma é válida. 
Obs1. A idade será válida se estiver no intervalo de 0 a 125 anos. 
Obs2. Utilizar estruturas de seleção: simples ou composta, ou ambas. 
*/
#include <stdio.h>

int main() {
    int idade = 0;

    printf("Informe a idade de uma pessoa: ");
    scanf("%d", &idade);

    printf("\n");
    if (idade < 0 || idade > 125) {
        printf("Error: idade invalida!\n");
    } else {
        printf("Idade valida!\n");
    }

    return 0;
}