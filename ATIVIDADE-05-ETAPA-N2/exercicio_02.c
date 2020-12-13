/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - Campus Tiangua
Professor: Rhyan Ximenes de Brito
Disciplina: Linguagem de Programacao I

Questao 02:
Construa um algoritmo que utilizando as funções de manipulação de arquivos pegue 
o texto_gravado.txt da questão anterior e leio. 
*/
#include <stdio.h>
#include <stdlib.h>

#define NAME_FILE "texto_gravado.txt"
#define TEXT_FILE_READ "rt"
#define MAX_BUFFER 50

int main() {
    FILE* file = fopen(NAME_FILE, TEXT_FILE_READ);
    char caracter = 'a', buffer[MAX_BUFFER];

    if (file == NULL) {
        printf("Error:\nFalha ao abrir o arquivo: %s\n", NAME_FILE);
        exit(1);
    }

    //metodo1 fgetc()
    printf("DADOS OBTIDOS PELO METODO 01: ");
    while (1) {
        caracter = fgetc(file);
        if (feof(file))
            break;
        printf("%c", caracter);
    }

    //metodo 2 fgets()
    printf("DADOS OBTIDOS PELO METODO 02: ");
    rewind(file);
    if (fgets(buffer, MAX_BUFFER, file) != NULL)
        printf("%s", buffer);
    else {
        printf("Error:\nFalha na leitura dos dados do arquivo: %s\n", NAME_FILE);
        exit(1);
    }
    
    //metodo 3 fscanf()
    printf("DADOS OBTIDOS PELO METODO 03: ");
    rewind(file);
    if(fscanf(file, "%[^\n]s", buffer))
        printf("%s\n", buffer);
    else {
        printf("Error:\nFalha na leitura dos dados do arquivo: %s\n", NAME_FILE);
        exit(1);
    }    

    if (fclose(file) == EOF) {
        printf("Error:\nFalha ao fechar o arquivo: %s\n", NAME_FILE);
        exit(1);
    }

    return 0;
}