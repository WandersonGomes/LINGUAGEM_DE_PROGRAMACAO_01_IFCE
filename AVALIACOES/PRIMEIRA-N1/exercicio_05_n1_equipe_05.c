/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 05:
    Desenvolva um algoritmo que calcule o consumo de combustível 
    de um automóvel em uma determinada viagem. O programa deve 
    pedir que o usuário informe: 
    a) Quantos Km tem a viagem. 
    b) Quantos Km o carro faz com um litro. 
    c) O preço do Litro de combustível. 
    
    Como resultado deve ter: 
    a) Quantos litros de combustível serão gastos na viagem. 
    b) Quanto em dinheiro será gasto com combustível, 
    considerando a ida e a volta. 
*/
#include <stdio.h>

int main() {
    float distancia = 0.0, autonomia = 0.0, preco_litro = 0.0;
    float total_combustivel = 0.0, total_gasto = 0.0;

    do {
        printf("Informe a distancia da viagem (ida): ");
        scanf("%f", &distancia);
        if (distancia <= 0) {
            printf("Error: distancia invalida!\n");
            printf("Tente novamente.\n");
        }
    } while (distancia <= 0);

    do {
        printf("Informe a autonomia do veiculo por litro (km por 1 litro): ");
        scanf("%f", &autonomia);
        if (autonomia <= 0) {
            printf("Error: autonomia invalida!\n");
            printf("Tente novamente.\n");
        }
    } while (autonomia <= 0);

    do {
        printf("Informe o preco do litro de combustivel em reais: ");
        scanf("%f", &preco_litro);
        if (preco_litro < 0) {
            printf("Error: preco do litro de combustivel invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (preco_litro < 0);

    total_combustivel = distancia * autonomia;
    total_gasto = total_combustivel * preco_litro;

    printf("\nA quantidade em litros de combustivel gasto na ida e volta eh: %g litros.\n", (total_combustivel*2));
    printf("O total gasto em combustivel na ida e volta eh: %g reais.\n", (total_gasto*2));

    return 0;
}