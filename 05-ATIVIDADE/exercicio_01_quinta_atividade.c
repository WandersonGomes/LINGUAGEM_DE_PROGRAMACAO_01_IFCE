/*
NSTITUICAO: IFCE - CAMPUS TIANGUA - CE
CURSO: BACHARELADO EM CIENCIA DA COMPUTACAO
SEMESTRE: 2020.2
ALUNO: WANDERSON GOMES DA COSTA
DISCIPLINA: LINGUAGEM DE PROGRAMACAO I
PROFESSOR: RHYAN XIMENES DE BRITO

EXERCICIO 01:
Construa um vetor de 10 posições de números inteiros, insira os 
valores via teclado, em seguida imprima-o invertido, ou seja, do 
último ao primeiro valor informado.
*/
#include <stdio.h>

int main() {
    int numeros[10] = {0}, i = 0;

    //ler os numeros
    for (i = 0; i < 10; i++) {
        printf("Informe o %d.o numero inteiro: ", i);
        scanf("%d", &numeros[i]);
    }

    //imprime os valores de tras para frente
    printf("\nNUMEROS INFORMADOS: ");
    for (i = 9; i > -1; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}