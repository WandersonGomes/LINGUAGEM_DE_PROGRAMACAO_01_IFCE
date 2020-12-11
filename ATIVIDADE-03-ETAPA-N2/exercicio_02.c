/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - Campus Tiangua
Professor: Rhyan Ximenes de Brito
Disciplina: Linguagem de Programacao I

Questao 02:
2. Construa uma função recursiva com passagem de parâmetro que receba 
a quantidade de número para uma sequência de fibonacci e em seguida 
exiba a sequência. Obs.: Não aceitar como entrada valores menores que 1 
nem maiores que 20. 
*/
#include <stdio.h>

//CALCULA O ENESIMO TERMO DA SEQUENCIA DE FIBONACCI
int fibonacci(int termo) {
    if (termo <= 2) {
        return 1;
    } else {
        return fibonacci(termo-1) + fibonacci(termo - 2);
    }
}

//IMPRIME A SEQUENCIA DE FIBONACCI
void printFibonacci(int termo) {
    if (termo == 0)
        return;
    printFibonacci(termo-1);
    printf(" %d", fibonacci(termo));
}

//PROGRAMA PRINCIPAL
int main() {
    int qtd_termos = 0;

    do {
        printf("Informe um valor entre 1 e 20 (inclusive): ");
        scanf("%d", &qtd_termos);
        if ((qtd_termos < 1) || (qtd_termos > 20))
            printf("Error: valor invalido!\nTente novamente.\n");
    } while ((qtd_termos < 1) || (qtd_termos > 20));

    printFibonacci(qtd_termos);
    printf("\n");

    return 0;
}