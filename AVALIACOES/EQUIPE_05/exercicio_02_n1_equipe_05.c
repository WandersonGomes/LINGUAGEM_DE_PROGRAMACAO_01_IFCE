/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 02:
    O custo ao consumidor de um carro novo é a soma do 
    custo de fábrica com a percentagem do distribuidor 
    e dos impostos (aplicados ao custo de fábrica). 
    Supondo que a percentagem do distribuidor seja de 28% 
    e os impostos de 45%, escrever um algoritmo que leia o 
    custo de fábrica de um carro e escreva o custo ao consumidor.
*/
#include <stdio.h>

int main() {
    float custo_fabrica = 0.0, custo_consumidor = 0.0;
    float distribuidor = 0.0, imposto = 0.0;
    
    do {
        printf("Informe o custo de fabrica de um automovel (reais): ");
        scanf("%f", &custo_fabrica);
        if (custo_fabrica < 0) {
            printf("Error: custo de fabrica invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (custo_fabrica < 0);

    distribuidor = custo_fabrica * 0.28;
    imposto = custo_fabrica * 0.45;
    custo_consumidor = custo_fabrica + distribuidor + imposto;

    printf("\nO custo para o consumidor eh de: %g reais\n", custo_consumidor);

    return 0;
}