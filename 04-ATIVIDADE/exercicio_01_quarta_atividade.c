/*
NSTITUICAO: IFCE - CAMPUS TIANGUA - CE
CURSO: BACHARELADO EM CIENCIA DA COMPUTACAO
SEMESTRE: 2020.2
ALUNO: WANDERSON GOMES DA COSTA
DISCIPLINA: LINGUAGEM DE PROGRAMACAO I
PROFESSOR: RHYAN XIMENES DE BRITO

EXERCICIO 01:
Construa um algoritmo com o laço de repetição (do... while(condicao);, 
para calcular o valor do fatorial de um número inteiro e maior ou 
igual a Zero. Obs. Os número devem ser informados via teclado.
*/
#include <stdio.h>

int main() {
    int numero = 0, aux = 0;
    long long int fatorial = 1;

    do {
        printf("Informe um numero maior ou igual a 0: ");
        scanf("%d", &numero);
        if (numero < 0) {
            printf("Error: valor invalido!\nTente novamente.\n");
        }
    } while (numero < 0);

    aux = numero;
    do {
        if (aux > 0) {
            fatorial = fatorial * aux;
        }
        aux--;
    } while (aux > 0);

    printf("O fatorial de %d e igual a: %lld\n", numero, fatorial);

    return 0;
}