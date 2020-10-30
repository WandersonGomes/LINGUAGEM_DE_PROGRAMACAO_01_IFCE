/*
NSTITUICAO: IFCE - CAMPUS TIANGUA - CE
CURSO: BACHARELADO EM CIENCIA DA COMPUTACAO
SEMESTRE: 2020.2
ALUNO: WANDERSON GOMES DA COSTA
DISCIPLINA: LINGUAGEM DE PROGRAMACAO I
PROFESSOR: RHYAN XIMENES DE BRITO

EXERCICIO 03:
Construa um algoritmo que exiba os números pares e os ímpares entre 
dois intervalos informados. Por exemplo: intervalo inicial: 3 e 
intervalo final: 30. 
Obs1. O intervalo inicial deve ser menor que o intervalo final. 
Obs2. Validar os intervalos de modo que só aceite o intevalo 
menor < intervalo maior. 
Obs3. O intervalo menor assim como o intervalo maior não podem 
ser Zero (nulo). 
Ob4. Utilizar o laço de repetição (for).
*/
#include <stdio.h>

int main() {
    int inicio = 0, final = 0, i = 0;

    do {
        printf("Informe o valor inicial (maior que 0): ");
        scanf("%d", &inicio);
        if (inicio < 1) {
            printf("Error: valor invalido!\nTente novamente.\n");
        }
    } while (inicio < 1);

    do {
        printf("Informe o valor final (maior do que o inicial): ");
        scanf("%d", &final);
        if (final <= inicio) {
            printf("Error: valor invalido!\nTente novamente.\n");
        }
    } while (final <= inicio);

    for (i = inicio; i <= final; i++) {
        if (i % 2 == 0) {
            printf("%d par.\n", i);
        } else {
            printf("%d impar.\n", i);
        }
    }

    return 0;
}