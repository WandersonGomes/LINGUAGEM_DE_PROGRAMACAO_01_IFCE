/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 01:
Construa um programa para gerenciar os saques de um caixa eletrônico, 
o mesmo deve possuir algum mecanismo para decidir o número de notas 
de cada valor que deverá ser disponibilizado para o cliente que 
realizou o saque. Um possível critério seria o da "distribuição ótima"
no sentido de que as notas de menor valor fossem distribuídas em 
número mínimo possível. 
Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria 
indicar uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de 
R$ 5,00 e duas notas de R$ 1,00. 
Dessa forma construa um programa que deve parar quando for informado 
0.00, assim receberá o valor da quantia a ser sacada e retorne a 
distribuição das notas de acordo com o critério da distribuição ótima. 
Deve-se observar que as notas disponibilizadas no caixa serão: 
R$ 5,00, R$ 10,00, R$ 20,00, R$ 50,00, assim ao ser informado o valor, 
o sistema deverá retornar se é possível sacar o valor informado. 
Por exemplo: 87,00 não é possível sacar, já para o valor de 95,00 é 
possível sacar e será utilizado uma nota de R$ 50,00 duas notas de 
R$ 20,00 e uma de R$ 5,00. 
Obs1. Validar os dados. 
Obs2. O laço de repetição encerrará quando for informado o valor 0.00, 
assim enquanto o valor for diferente de Zero o programa deverá continuar. *
*/
#include <stdio.h>

int main() {
    int reais = 0;
    float valor_saque = 0.0, centavos = 0.0;

    while (1) {
        do {
            printf("Informe o valor do saque: ");
            scanf("%f", &valor_saque);
            if (valor_saque < 0) {
                printf("Error: valor invalido!\nTente novamente.\n");
            }
        } while (valor_saque < 0);

        if (valor_saque == 0) {
            printf("Programa encerrado!\n");
            break;
        }

        reais = valor_saque;
        centavos = valor_saque - reais;

        if ((centavos != 0) || (reais % 5 != 0)) {
            printf("Nao e possivel realizar o saque!\n");
        } else {
            //5 10 20 50
            printf("NOTAS DE 50: %d\n", reais/50);
            reais = reais%50;
            printf("NOTAS DE 20: %d\n", reais/20);
            reais = reais%20;
            printf("NOTAS DE 10: %d\n", reais/10);
            reais = reais%10;
            printf("NOTAS DE 5: %d\n", reais/5);
        }
    }

    return 0;
}