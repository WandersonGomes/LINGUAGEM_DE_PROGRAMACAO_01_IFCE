/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 01:
    Escrever um algoritmo que leia três valores: A, B e C. 
    A seguir, calcule e mostre:
    a) a área do triângulo que tem A por base e C por altura. 
    b) a área do círculo de raio C. 
    c) A área do trapézio que tem A e B por bases e C por altura. 
    d) A área do quadrado que tem lado B. 
    e) a área do retângulo que tem lados A e B.
*/
#include <stdio.h>

#define MY_PI 3.14159

int main() {
    double valorA = 0.00, valorB = 0.00, valorC = 0.00;
    double area_triangulo = 0.00, area_circulo = 0.00, area_trapezio = 0.00;
    double area_quadrado = 0.00, area_retangulo = 0.00;

    do {
        printf("Informe o valor A (positivo): ");
        scanf("%lf", &valorA);
        if (valorA < 0) {
            printf("Error: valor invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (valorA < 0);

    do {
        printf("Informe o valor B (positivo): ");
        scanf("%lf", &valorB);
        if (valorB < 0) {
            printf("Error: valor invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (valorB < 0);

    do {
        printf("Informe o valor C (positivo): ");
        scanf("%lf", &valorC);
        if (valorC < 0) {
            printf("Error: valor invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (valorC < 0);

    area_triangulo = (valorA * valorC)/2.00;
    area_circulo = (valorC * valorC * MY_PI);
    area_trapezio = ((valorA + valorB) * valorC)/2.00;
    area_quadrado = valorB * valorB;
    area_retangulo = valorA * valorB;

    printf("\n");
    printf("A area do triangulo A por base e C por altura: %g\n", area_triangulo);
    printf("A area do circulo de raio C: %g\n", area_circulo);
    printf("A area do trapezio que tem A e B por bases e C por altura: %g\n", area_trapezio);
    printf("A area do quadrado que tem lado B: %g\n", area_quadrado);
    printf("A area do retangulo que tem lados A e B: %g\n", area_retangulo);

    return 0;
}