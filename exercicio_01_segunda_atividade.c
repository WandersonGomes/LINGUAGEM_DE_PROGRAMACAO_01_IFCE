/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - CAMPUS TIANGUA
Curso: Bacharelado em Ciencia da Computacao
Semestre: 2020.2
Disciplina: Logica de Programacao 01
Professor: Rhyan Ximenes de Brito
Exercicio 01:
     Receba o ano de nascimento de uma pessoa e o ano atual, 
     calcule e mostre: 
     a) A idade dessa pessoa 
     b) Quantos anos ela terá em 2021 
     c) A idade dessa pessoa em dias (considere que um ano possui 365 dias) 
     d) A idade dessa pessoa em meses
*/
#include <stdio.h>

int main() {
    int ano_nascimento = 0, ano_atual = 0;
    int idade_anos = 0, idade_2021 = 0, idade_dias = 0, idade_meses = 0;

    printf("Informe o ano de nascimento da pessoa: ");
    scanf("%d", &ano_nascimento);

    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);

    idade_anos = ano_atual - ano_nascimento;
    idade_2021 = 2021 - ano_nascimento;
    idade_dias = idade_anos * 365;
    idade_meses = idade_anos * 12;

    printf("\n");
    printf("A pessoa tem a idade de : %d anos.\n", idade_anos);
    printf("A pessoa tera a idade no ano de 2021 igual a: %d anos.\n", idade_2021);
    printf("A pessoa tem a idade de: %d dias.\n", idade_dias);
    printf("A pessoa tem a idade de: %d meses.\n", idade_meses);

    return 0;
}