/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 04:
    Escreva um algoritmo que leia a distância percorrida por uma 
    automóvel (em km) e o intervalo de tempo correspondente 
    (em horas), a quilometragem percorrida com 1 L de gasolina e 
    o valor do litro de gasolina, a seguir calcule e imprima a 
    sua velocidade média no percurso em km/h e em m/s e quanto 
    custaria em reais a gasolina consumida para ida e volta.
*/
#include <stdio.h>

int main() {
    float distancia = 0.0, autonomia = 0.0, preco_litro = 0.0;
    int intervalo = 0;
    float velocidade = 0.0, total_gasto = 0.0;

    do {
        printf("Informe a distancia em Km percorrida pelo automovel: ");
        scanf("%f", &distancia);
        if (distancia < 0) {
            printf("Error: distancia invalida!\n");
            printf("Tente novamente.\n");
        }
    } while (distancia < 0);

    do {
        printf("Informe o intervalo de tempo (horas): ");
        scanf("%d", &intervalo);
        if (intervalo <= 0) {
            printf("Error: intervalo de tempo invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (intervalo <= 0);

    do {
        printf("Informe a quantidade de Km percorrida por litro: ");
        scanf("%f", &autonomia);
        if (autonomia <= 0) {
            printf("Error: a autonomia informada e invalida!\n");
            printf("Tente novamente.\n");
        }
    } while (autonomia <= 0);

    do {
        printf("Informe o preco do litro da gasolina: ");
        scanf("%f", &preco_litro);
        if (preco_litro < 0) {
            printf("Error: preco do litro de gasolina invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (preco_litro < 0);

    velocidade = distancia/intervalo;
    total_gasto = (distancia*autonomia) * preco_litro;

    printf("\nA velocidade media em km/h e: %g\n", velocidade);
    printf("A velocidade em m/s e: %g.\n", velocidade/3.6);
    printf("O valor total gasto em gasolina eh: %g reais.\n", total_gasto);

    return 0;
}