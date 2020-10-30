/*
INSTITUICAO: IFCE - CAMPUS TIANGUA - CE
CURSO: BACHARELADO EM CIENCIA DA COMPUTACAO
SEMESTRE: 2020.2
ALUNO: WANDERSON GOMES DA COSTA
DISCIPLINA: LINGUAGEM DE PROGRAMACAO I
PROFESSOR: RHYAN XIMENES DE BRITO

EXERCICIO 01:
Construa um algoritmo que receba 3 números quaisquer e 
informe qual é o maior, o menor e se os mesmos são iguais. 
Obs. Utilizar estrutura de seleção encadeada.
*/
#include <stdio.h>

int main() {
    float numero1 = 0.0, numero2 = 0.0, numero3 = 0.0;

    printf("Informe o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%f", &numero2);
    printf("Informe o terceiro numero: ");
    scanf("%f", &numero3);

    if ((numero1 == numero2) && (numero2 == numero3)) {
        printf("OS TRES NUMEROS INFORMADOS SAO IGUAIS\n");
    } else if ((numero1 >= numero2) && (numero2 >= numero3)) {
        printf("O MAIOR NUMERO INFORMADO E: %g\n", numero1);
        printf("O MENOR NUMERO INFORMADO E: %g\n", numero3);
    } else if ((numero1 >= numero3) && (numero3 >= numero2)) {
        printf("O MAIOR NUMERO INFORMADO E: %g\n", numero1);
        printf("O MENOR NUMERO INFORMADO E: %g\n", numero2);
    } else if ((numero2 >= numero1) && (numero1 >= numero3)) {
        printf("O MAIOR NUMERO INFORMADO E: %g\n", numero2);
        printf("O MENOR NUMERO INFORMADO E: %g\n", numero3);
    } else if ((numero2 >= numero3) && (numero3 >= numero1)) {
        printf("O MAIOR NUMERO INFORMADO E: %g\n", numero2);
        printf("O MENOR NUMERO INFORMADO E: %g\n", numero1);
    } else if ((numero3 >= numero1) && (numero1 >= numero2)) {
        printf("O MAIOR NUMERO INFORMADO E: %g\n", numero3);
        printf("O MENOR NUMERO INFORMADO E: %g\n", numero2);
    } else if ((numero3 >= numero2) && (numero2 >= numero1)) {
        printf("O MAIOR NUMERO INFORMADO E: %g\n", numero3);
        printf("O MENOR NUMERO INFORMADO E: %g\n", numero1);
    }

    return 0;
}