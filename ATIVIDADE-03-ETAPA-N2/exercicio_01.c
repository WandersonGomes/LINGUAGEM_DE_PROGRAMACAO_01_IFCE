/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - Campus Tiangua
Professor: Rhyan Ximenes de Brito
Disciplina: Linguagem de Programacao I

Questao 01:
Construa uma função recursiva com passagem de parâmetro e com retorno 
que receba um valor inteiro e retorno o fatorial do mesmo. 
Obs.: não aceitar valores negativos.
*/
#include <stdio.h>

//FUNCAO QUE CALCULA O FATORIAL DE UM VALOR DADO DE FORMA RECURSIVA
long long int fatorialRecursivo(int numero) {
    if ((numero == 0) || (numero == 1)) {
        return 1;
    } else {
        return numero * fatorialRecursivo(numero - 1);
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int numero = 0;

    do {
        printf("Informe um valor inteiro positivo: ");
        scanf("%d", &numero);
        if (numero < 0)
            printf("Error: valor invalido!\nTente novamente.\n");
    } while (numero < 0);

    printf("\nO fatorial de %d e: %lld\n", numero, fatorialRecursivo(numero));

    return 0;
}