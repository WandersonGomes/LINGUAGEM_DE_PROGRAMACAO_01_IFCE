/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - Campus Tiangua
Professor: Rhyan Ximenes de Brito
Disciplina: Linguagem de Programacao I

Questao 01:
Construa uma função com passagem de 2 parâmetros que imprima a soma 
e multiplicação dos valores informados.
*/
#include <stdio.h>

//FUNCAO QUE IMPRIME A SOMA E O PRODUTO DE DOIS VALORES INFORMADOS
void imprimirSomaProduto(int numero1, int numero2) {
    printf("\nSoma: %d\n", (numero1 + numero2));
    printf("Produto: %d\n", (numero1 * numero2));
}

//PROGRAMA PRINCIPAL
int main() {
    int numero1 = 0, numero2 = 0;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);

    imprimirSomaProduto(numero1, numero2);

    return 0;
}