/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 03:
    Faça um algoritmo que receba o número de horas trabalhadas, 
    o valor do salário mínimo e o número de horas extras 
    trabalhadas. Calcule e mostre o salário a receber seguindo 
    as regras a seguir: 
    a) A hora trabalhada vale 1,76 do salário mínimo; 
    b) A hora extra vale 11,65% do salário mínimo; 
    c) O salário bruto equivale ao número de horas 
       trabalhadas multiplicado pelo valor da hora trabalhada; 
    d) A quantia a receber pelas horas extras equivale ao 
       número de horas extras trabalhadas multiplicado pelo 
       valor da hora extra; 
    e) O salário a receber equivale ao salário bruto mais a quantia 
       a receber pelas horas extras
*/
#include <stdio.h>

int main() {
    int horas_trabalhadas = 0, horas_extras = 0;
    float salario_minimo = 0.0;

    float valor_hora_trabalhada = 0.0, valor_hora_extra = 0.0;
    float salario_bruto = 0.0, salario_liquido = 0.0;

    do {
        printf("Informe o numero de horas trabalhadas: ");
        scanf("%d", &horas_trabalhadas);
        if (horas_trabalhadas < 0) {
            printf("Error: numero de horas trabalhadas invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (horas_trabalhadas < 0);

    do {
        printf("Informe o valor do salario minimo (reais): ");
        scanf("%f", &salario_minimo);
        if (salario_minimo < 0) {
            printf("Error: valor do salario minimo invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (salario_minimo < 0);

    do {
        printf("Informe o numero de horas extras trabalhadas: ");
        scanf("%d", &horas_extras);
        if (horas_extras < 0) {
            printf("Error: numero de horas extras invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (horas_extras < 0);

    valor_hora_trabalhada = salario_minimo * 0.0176;
    valor_hora_extra = salario_minimo * 0.1165;
    salario_bruto = horas_trabalhadas * valor_hora_trabalhada;
    salario_liquido = salario_bruto + (valor_hora_extra * horas_extras);

    printf("\nO valor do salario liquido do funcionario eh: %g reais.\n", salario_liquido);

    return 0;
}