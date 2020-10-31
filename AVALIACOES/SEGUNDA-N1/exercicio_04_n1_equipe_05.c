/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 04:
Preciso fazer um levantamento do meu estoque de mercadorias na minha 
loja de artigos de escritório. Para isso preciso saber qual o material
que vendo e a quantidade de cada material. Ajude, fazendo a entrada e 
a saída de mercadorias da loja no último mês de venda. O algoritmo 
termina quando encontrar a palavra “ACABOU” para a entrada da 
mercadoria. Minhas mercadorias com o estoque de um mês atrás são: 
    RESMA PAPEL A4--100 unidades; 
    CADERNOS 12 matérias - 150 unidades; 
    LÁPIS DE COR com 12 unidades 15.000 caixas; 
    APAGADOR QUADRO BRANCO 230 unidades; 
    CANETAS 500 unidades. 
    
    Obs1. Validar os dados. 
    Obs2. Usar o laço de repetição for.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void paraMaiusculo(char *string) {
    int i = 0, tamanho = 0;
    tamanho = strlen(string);

    for (i = 0; i < tamanho; i++) {
        string[i] = toupper(string[i]);
    }
}

int tipoOperacao(char *operacao) {
    if (strcmp(operacao, "ENTRADA\n") == 0)
        return 1;
    if (strcmp(operacao, "SAIDA\n") == 0)
        return 2;

    return 0;
}

int main() {
    int estoque[5] = {0}, i = 0;
    char operacao[15];
    int tipo_operacao = 0, item = 0, quantidade = 0;

    while (1) {
        printf("Informe uma operacao desejada:\n");
        printf("ENTRADA\n");
        printf("SAIDA\n");
        printf("ACABOU\n");
        printf("OPERACAO: ");
        fgets(operacao, 15, stdin);
        
        paraMaiusculo(operacao);

        if (strcmp(operacao, "ACABOU\n") == 0) {
            break;
        }

        tipo_operacao = tipoOperacao(operacao);

        if (tipo_operacao == 0) {
            printf("Error: operacao nao reconhecida!\nTente novamente.\n");
        } else {
            if (tipo_operacao == 1) {
                printf("INFORME QUAL ITEM DESEJA INSERIR NO ESTOQUE:\n");
            } else {
                printf("INFORME QUAL ITEM VOCE DESEJA RETIRAR DO ESTOQUE:\n");
            }

            do {
                printf("1 - RESMA PAPEL A4\n");
                printf("2 - CADERNOS 12 MATERIAS\n");
                printf("3 - LAPIS DE COR COM 12 UNIDADES\n");
                printf("4 - APAGADOR DE QUADRO BRANCO\n");
                printf("5 - CANETAS\n");
                printf("ITEM: ");
                scanf("%d", &item);
                if (item < 1 || item > 5) {
                    printf("Error: item nao encontrado!\nTente novamente.\n");
                }
            } while (item < 1 || item > 5);

            if (tipo_operacao == 1) {
                do {
                    printf("Informe a quantidade de itens que deseja inserir: ");
                    scanf("%d", &quantidade);
                    if (quantidade <= 0) {
                        printf("Error: quantidade invalida!\nTente novamente.\n");
                    }
                } while (quantidade <= 0);
                
                for (i = 0; i < quantidade; i++) {
                    estoque[item-1]++;
                }
            } else {
                do {
                    printf("Quantidade no estoque: %d\n", estoque[item-1]);
                    printf("Informe a quantidade que deseja retirar: ");
                    scanf("%d", &quantidade);
                    if (quantidade < 0 || quantidade > estoque[item-1]) {
                        printf("Error: quantidade invalida!\nTente novamente.\n");
                    }
                } while (quantidade < 0 || quantidade > estoque[item-1]);
            
                for (i = 0; i < quantidade; i++) {
                    estoque[item-1]--;
                }
            }
        }
        getchar();
    }

    printf("\nESTOQUE:\n");
    printf("RESMA PAPEL A4 -- %d unidades;\n", estoque[0]);
    printf("CADERNOS 12 MATERIAS - %d unidades;\n", estoque[1]);
    printf("LAPIS DE COR COM 12 UNIDADES %d caixas;\n", estoque[2]);
    printf("APAGADOR QUADRO BRANCO %d unidades;\n", estoque[3]);
    printf("CANETAS %d unidades.\n", estoque[4]);

    return 0;
}