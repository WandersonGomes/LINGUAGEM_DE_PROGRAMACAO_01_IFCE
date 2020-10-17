/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.2
Exercicio 01:
Desenvolva um algoritmo que calcule o consumo de combustível de
um automóvel em uma determinada viagem. O programa deve pedir que 
o usuário informe: 
    a) Quantos Km tem a viagem de ida e volta. 
    b) Quantos Km o carro faz com um litro de gasolina. 
    c) O preço do Litro de combustível. 

Como resultado deve ter: 
    a) Quantos litros de combustível serão gastos na viagem
    ida e volta. 
    b) Quanto em dinheiro será gasto com combustível em dólar, 
    considerano que 1 dólar é R$ 5,53.  
*/
#include <stdio.h>

#define PRECO_DOLAR 5.53

int main() {
    double qtd_km_ida_volta = 0.00, consumo_litros_km = 0.00, combustivel_gasto = 0.00;
    float preco_litro_combustivel = 0.0, valor_total_viagem = 0.0;

    do {
        printf("Informe a quantidade de Km da viagem (ida e volta): ");
        scanf("%lf", &qtd_km_ida_volta);
        if (qtd_km_ida_volta < 0) {
            printf("Error: a quantidade de km e invalida.\n");
            printf("Tente novamente.\n");
        }
    } while (qtd_km_ida_volta < 0);

    do {
        printf("Informe o consumo em litros/km do veiculo: ");
        scanf("%lf", &consumo_litros_km);
        if (consumo_litros_km < 0) {
            printf("Error: consumo invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (consumo_litros_km < 0);

    do {
        printf("Informe o preco do litro do combustivel em reais: ");
        scanf("%f", &preco_litro_combustivel);
        if (preco_litro_combustivel < 0) {
            printf("Error: preco do litro do combustivel invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (preco_litro_combustivel < 0);

    combustivel_gasto = qtd_km_ida_volta/consumo_litros_km;
    valor_total_viagem = combustivel_gasto * preco_litro_combustivel * PRECO_DOLAR;

    printf("\nConsumo total de combustivel: %g litros.\n", combustivel_gasto);
    printf("O valor total gasto em combustivel na viagem eh: %g dolares.\n", valor_total_viagem);

    return 0;
}