/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 04:
Construa um programa que some os valores das colunas de uma 
matriz 4x5, armazenando cada resultado em cada coluna de um 
vetor de 5 posições, Crie uma função para efetuar a soma de 
cada número da coluna. 
Por exemplo: Somar os valores das 
coluna1 (linha1+linha2+linha3+linha4) inserir na posição 1 do vetor, 
coluna2 (linha1+linha2+linha3+linha4), inserir na posição 2 do vetor, 
etc. 
*/
#include <stdio.h>

//FUNCAO QUE RETORNA A SOMA DOS ELEMENTOS DE UMA COLUNA
int resultadoSomaColuna(int matriz[4][5], int coluna) {
    int i = 0, resultado = 0;

    for (; i < 4; i++) {
        resultado += matriz[i][coluna];
    }

    return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
    int matriz[4][5] = {0};
    int resultados[5] = {0};
    int i = 0, j = 0;

    //preenchimento da matriz
    for (; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("[%d, %d] = ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    //calcula o resultado de cada coluna
    for (j = 0; j < 5; j++) {
        resultados[j] = resultadoSomaColuna(matriz, j);
    }

    //imprime a matriz
    printf("\nMATRIZ:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //imprime o vetor com os resultados
    printf("Soma:\n");
    for (j = 0; j < 5; j++) {
        printf("%d ", resultados[j]);
    }
    printf("\n");

    return 0;
}