/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - Campus Tiangua
Professor: Rhyan Ximenes de Brito
Disciplina: Linguagem de Programacao I

Questao 01:
Construa uma algoritmo que utilizando as funções de manipulação de arquivos, 
receba uma frase e grave-o em um arquivo.txt com o nome texto_gravado.txt.
*/
#include <stdio.h>
#include <stdlib.h>

#define NAME_FILE "texto_gravado.txt"
#define TEXT_FILE_WRITE "wt"
#define MESSAGE_SIZE 50

//VERIFICA SE EH UM CARACTER VALIDO (EVITAR PROBLEMAS COM BUFFER)
int isValidCaracter(char caracter) {
    if ((caracter >= 'a') && (caracter <= 'z'))
        return 1;
    if ((caracter >= 'A') && (caracter <= 'Z'))
        return 1;
    if ((caracter == '-') || (caracter == ' '))
        return 1;
    if ((caracter >= '0') && (caracter <= '9'))
        return 1;
    if ((caracter == '"') || (caracter == '\''))
        return 1;
    if ((caracter == ',') || (caracter == '.') || (caracter == '!') || (caracter == '?'))
        return 1;
    if ((caracter == '@') || (caracter == '#') || (caracter == ';'))
        return 1;
    if ((caracter == '<') || (caracter == '=') || (caracter == '>'))
        return 1;
    return 0;
}

//FAZ A LEITURA DE UMA STRING DE TAMANHO (N)
char* readString(int size) {
    int i = 0;
    char caracter = 'a';
    char* string = (char*) malloc(sizeof(char) * (size + 1));

    while (1) {
        caracter = getchar();
        
        if (((caracter == '\n') && (i > 0)) || (i == size))
            break;
        else if (isValidCaracter(caracter)) {
            string[i] = caracter;
            i++;
        }
    }

    string[i] = '\0';

    return string;
}

//PROGRAMA PRINCIPAL
int main() {
    FILE* file = fopen(NAME_FILE, TEXT_FILE_WRITE);
    char* message = NULL;

    if (file == NULL) {
        printf("Error:\nFalha na gravacao do arquivo: %s\n", NAME_FILE);
        exit(1);
    }

    printf("Informe a mensagem a ser gravada: ");
    message = readString(MESSAGE_SIZE);

    fprintf(file, "%s\n", message);
    //fputs(message, file); //outra alternativa

    if (fclose(file) == EOF) {
        printf("Error:\nFalha no fechamento do arquivo: %s\n", NAME_FILE);
        exit(1);
    }

    return 0;
}