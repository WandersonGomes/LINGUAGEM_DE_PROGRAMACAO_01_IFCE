/*
NSTITUICAO: IFCE - CAMPUS TIANGUA - CE
CURSO: BACHARELADO EM CIENCIA DA COMPUTACAO
SEMESTRE: 2020.2
ALUNO: WANDERSON GOMES DA COSTA
DISCIPLINA: LINGUAGEM DE PROGRAMACAO I
PROFESSOR: RHYAN XIMENES DE BRITO

EXERCICIO 02:
 Elabore uma matriz quadrada 3x3 e preencha com nomes de animais, 
 em seguida imprima-a. 
*/
#include <stdio.h>

int main() {
    char animais[3][3][30];
    int i = 0, j = 0, contador = 1;

    //ler o nome dos animais
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Informe o nome do %d.o animal: ", contador++);
            scanf("%s", animais[i][j]);
        }
    }

    //apresenta o nome dos animais
    printf("\nTABELA COM O NOME DOS ANIMAIS INFORMADOS:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%s\t\t", animais[i][j]);
        }
        printf("\n");
    }

    return 0;
}