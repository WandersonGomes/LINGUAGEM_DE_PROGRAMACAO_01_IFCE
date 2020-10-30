/*
INSTITUICAO: IFCE - CAMPUS TIANGUA - CE
CURSO: BACHARELADO EM CIENCIA DA COMPUTACAO
SEMESTRE: 2020.2
ALUNO: WANDERSON GOMES DA COSTA
DISCIPLINA: LINGUAGEM DE PROGRAMACAO I
PROFESSOR: RHYAN XIMENES DE BRITO

EXERCICIO 02:
Elabore um algoritmo utilizando o case no C para que sejam verificadas 
as faixas etárias onde 
    a) de 0 .. 3 (bebê); 
    b) 4 .. 10 (criança); 
    c) 11 ..17 (adolescente);
    d) acima de 17 anos adulto, 
de modo que o usuário digitará o nome e a idade de uma pessoa qualquer. 
Obs1. Utilizar estrutura de seleção (multipla escolha), 
Obs2. Validar os dados, ou seja, não aceitar idade menor que Zero ou maior que 125 anos.
*/
#include <stdio.h>

int main() {
    char nome[50];
    int idade = 0;

    printf("Informe o nome da pessoa: ");
    gets(nome);

    printf("Informe a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 125) {
        printf("\n");
        switch(idade) {
            //BEBE
            case 0: printf("CATEGORIA: BEBE\n"); break;
            case 1: printf("CATEGORIA: BEBE\n"); break;
            case 2: printf("CATEGORIA: BEBE\n"); break;
            case 3: printf("CATEGORIA: BEBE\n"); break;
            //CRIANCA
            case 4: printf("CATEGORIA: CRIANCA\n"); break;
            case 5: printf("CATEGORIA: CRIANCA\n"); break;
            case 6: printf("CATEGORIA: CRIANCA\n"); break;
            case 7: printf("CATEGORIA: CRIANCA\n"); break;
            case 8: printf("CATEGORIA: CRIANCA\n"); break;
            case 9: printf("CATEGORIA: CRIANCA\n"); break;
            case 10: printf("CATEGORIA: CRIANCA\n"); break;
            //ADOLESCENTE
            case 11: printf("CATEGORIA: ADOLESCENTE\n"); break;
            case 12: printf("CATEGORIA: ADOLESCENTE\n"); break;
            case 13: printf("CATEGORIA: ADOLESCENTE\n"); break;
            case 14: printf("CATEGORIA: ADOLESCENTE\n"); break;
            case 15: printf("CATEGORIA: ADOLESCENTE\n"); break;
            case 16: printf("CATEGORIA: ADOLESCENTE\n"); break;
            case 17: printf("CATEGORIA: ADOLESCENTE\n"); break;
            //ADULTO
            default:
                printf("CATEGORIA: ADULTO\n"); break;
        }
    } else {
        printf("Error: idade invalida!\n");
    }

    return 0;
}