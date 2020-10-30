/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - CAMPUS TIANGUA
Curso: Bacharelado em Ciencia da Computacao
Semestre: 2020.2
Disciplina: Logica de Programacao 01
Professor: Rhyan Ximenes de Brito
Exercicio 03:
    Faça um programa que leia um número inteiro 
    e imprima o seu antecedente e o seu sucessor.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    printf("\nO seu antecedente eh: %d\n", (numero - 1));
    printf("O seu sucessor eh: %d\n", (numero + 1));

    return 0;
}