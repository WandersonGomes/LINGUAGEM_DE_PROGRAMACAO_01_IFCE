/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - Campus Tiangua
Professor: Rhyan Ximenes de Brito
Disciplina: Linguagem de Programacao I

Questao 03:
Observe a tabela abaixo e construa uma estrutura heterogênea 
para o cadastro de produtos e ao finalizar exiba os dados.

Cadastro de Produtos
Nome    Tipo Caractere
TipoProd. Tipo Caractere
Quant.  Tipo Inteiro
ValUnit.    Tipo Real
*/
#include <stdio.h>

//STRUCTS
typedef struct {
    char nome[31];
    char tipo[31];
    int quantidade;
    float valor_unitario;
} Produto;

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

//PROGRAMA PRINCIPAL
int main() {
    Produto produto;

    printf("Informe o nome do produto: ");
    lerString(produto.nome, 30);
    printf("Informe o tipo do produto: ");
    lerString(produto.tipo, 30);

    do {
        printf("Informe a quantidade do produto: ");
        scanf("%d", &produto.quantidade);
        if (produto.quantidade <= 0) {
            printf("Error: valor invalido!\nTente novamente.\n");
        }
    } while (produto.quantidade <= 0);

    do {
        printf("Informe o valor unitario do produto: ");
        scanf("%f", &produto.valor_unitario);
        if (produto.valor_unitario < 0) {
            printf("Error: valor invalido!\nTente novamente.\n");
        }
    } while (produto.valor_unitario < 0);

    printf("\nDADOS DO PRODUTO:\n");
    printf("Nome: %s\n", produto.nome);
    printf("Tipo: %s\n", produto.tipo);
    printf("Quantidade: %d\n", produto.quantidade);
    printf("Valor Unitario: %.2f\n", produto.valor_unitario);

    return 0;
}