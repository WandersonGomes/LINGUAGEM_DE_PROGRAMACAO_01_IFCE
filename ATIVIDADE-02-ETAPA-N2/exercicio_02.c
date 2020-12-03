/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - Campus Tiangua
Professor: Rhyan Ximenes de Brito
Disciplina: Linguagem de Programacao I

Questao 02:
Construa uma função que receba 4 valores e 
retorno o maior deles.
*/
#include <stdio.h>

//FUNCAO QUE RETORNA O MAIOR NUMERO ENTRE DOIS NUMEROS DADOS
int max(int a, int b) {
    if (a > b)
        return a;
    return b;
}

//FUNCAO QUE RETORNA O MAIOR NUMERO ENTRE 4 NUMEROS INFORMADOS
int maxQuatroValores(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

//PROGRAMA PRINCIPAL
int main() {
    int numero1 = 0, numero2 = 0, numero3 = 0, numero4 = 0;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &numero3);
    printf("Informe o quarto numero: ");
    scanf("%d", &numero4);

    printf("\nO maior valor entre %d, %d, %d e %d e: %d\n", numero1, numero2, numero3, numero4, maxQuatroValores(numero1, numero2, numero3, numero4));

    return 0;
}