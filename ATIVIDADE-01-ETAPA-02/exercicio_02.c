/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - Campus Tiangua
Professor: Rhyan Ximenes de Brito
Disciplina: Linguagem de Programacao I

Questao 02:
Elabore uma matriz 3X3, preencha com nome de frutas em seguida 
exiba os resultados.
*/
#include <stdio.h>
#include <stdlib.h>

//FUNCAO QUE VERIFICA SE UM CARACTERE E UMA LETRA OU ESPACO EM BRANCO
int ehLetra(char caractere) {
    if ((caractere >= 'a') && (caractere <= 'z')) {
        return 1;
    }
    if ((caractere >= 'A') && (caractere <= 'Z')) {
        return 1;
    }
    if (caractere == ' ') {
        return 1;
    }

    return 0;
}

//FUNCAO QUE LER UMA STRING
void lerString(char* string, int tamanho) {
    int i = 0;
    char letra = 'a';

    while (1) {
        letra = getchar();
        if ((letra == '\n') && (i > 0) || (i == (tamanho - 1))) {
            break;
        }

        if (ehLetra(letra)) {
            string[i] = letra;
            i++;
        }
    }
    string[i] = '\0';
}

//FUNCAO QUE ALOCA UMA MATRIZ E RETORNA PARA O PROGRAMA PRINCIPAL
char*** alocaMatriz(int qtd_linhas, int qtd_colunas, int qtd_letras) {
    int i, j;
    char*** matriz = (char***) malloc(sizeof(char**) * qtd_linhas);

    for (i = 0; i < qtd_linhas; i++) {
        matriz[i] = (char**) malloc(sizeof(char*) * qtd_colunas);
    }

    for (i = 0; i < qtd_linhas; i++) {
        for (j = 0; j < qtd_colunas; j++) {
            matriz[i][j] = (char*) malloc(sizeof(char) * qtd_letras);
        }
    }

    return matriz;
}

//FUNCAO QUE DESALOCA A MATRIZ
void desalocaMatriz(char*** matriz, int qtd_linhas, int qtd_colunas) {
    int i, j;

    for (i = 0; i < qtd_linhas; i++) {
        for (j = 0; j < qtd_colunas; j++) {
            free(matriz[i][j]);
        }
    }

    for (i = 0; i < qtd_linhas; i++) {
        free(matriz[i]);
    }

    free(matriz);
}

//FUNCAO QUE PREENCHE A MATRIZ
void preencheMatriz(char*** matriz, int qtd_linhas, int qtd_colunas) {
    int i, j;
    int indice = 1;

    for (i = 0; i < qtd_linhas; i++) {
        for (j = 0; j < qtd_colunas; j++) {
            printf("Informe o nome da %d.a fruta: ", indice);
            lerString(matriz[i][j], 30);
            indice++;
        }
    }
}

//FUNCAO QUE EXIBE OS DADOS DA MATRIZ
void imprimeMatriz(char*** matriz, int qtd_linhas, int qtd_colunas) {
    int i, j;

    for (i = 0; i < qtd_linhas; i++) {
        for (j = 0; j < qtd_colunas; j++) {
            printf("%s\t", matriz[i][j]);
        }
        printf("\n");
    }
} 

//PROGRAMA PRINCIPAL
int main() {
    char*** matriz_frutas;

    matriz_frutas = alocaMatriz(3, 3, 30);

    preencheMatriz(matriz_frutas, 3, 3);

    printf("\nTABELA DE FRUTAS:\n");
    imprimeMatriz(matriz_frutas, 3, 3);

    desalocaMatriz(matriz_frutas, 3, 3);

    return 0;
}