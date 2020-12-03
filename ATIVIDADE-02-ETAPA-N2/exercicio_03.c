/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - Campus Tiangua
Professor: Rhyan Ximenes de Brito
Disciplina: Linguagem de Programacao I

Questao 03:
Construa uma função que receba um valor inteiro maior que 5 e menor 
que 10 e imprima um vetor de igual tamanho com valores inteiros 
informados pelo usuário.
*/
#include <stdio.h>

//FUNCAO QUE IMPRIME UM VETOR COM UMA CERTA QUANTIDADE DE DADOS
void imprimirVetor(int quantidade) {
    int i, vetor[10];
    
    printf("\n");
    for (i = 0; i < quantidade; i++) {
        printf("Informe o %d.o numero inteiro: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor: ");
    printf("%d", vetor[0]);
    for (i = 1; i < quantidade; i++) {
        printf(", %d", vetor[i]);
    }
    printf(".\n");
}

//PROGRAMA PRINCIPAL
int main() {
    int tam_vetor = 0;

    do {
        printf("Informe a quantidade de valores do vetor (4 < n < 11): ");
        scanf("%d", &tam_vetor);
        if ((tam_vetor < 5) || (tam_vetor > 10)) {
            printf("Error: valor invalido!\nTente novamente.\n");
        }
    } while ((tam_vetor < 5) || (tam_vetor > 10));
    
    imprimirVetor(tam_vetor);
    
    return 0;
}