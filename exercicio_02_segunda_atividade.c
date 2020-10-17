/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - CAMPUS TIANGUA
Curso: Bacharelado em Ciencia da Computacao
Semestre: 2020.2
Disciplina: Logica de Programacao 01
Professor: Rhyan Ximenes de Brito
Exercicio 02:
    Receba o número de horas trabalhadas por uma pessoa e o 
    valor do salário mínimo e mostre o salário a receber 
    baseado nas seguintes regras:
    a) A hora trabalhada equivale a 10% do salário mínimo informado.
    b) O salário bruto é dado pelo número de horas trabalhadas 
       multiplicadas pelo valor de cada hora.
    c) O imposto pago é de 3%. 
    d) O salário a receber é equivalente ao salário bruto subtraído do imposto
*/
#include <stdio.h>

int main() {
    int numero_horas_trabalhadas = 0;
    float salario_minimo = 0.0, salario_final = 0.0;
    float valor_hora = 0.0, salario_bruto = 0.0, imposto = 0.0;

    do {
        printf("Informe a quantidade de horas trabalhadas: ");
        scanf("%d", &numero_horas_trabalhadas);
        if (numero_horas_trabalhadas < 0) {
            printf("Error: numero de horas invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (numero_horas_trabalhadas < 0);

    do {
        printf("Informe o valor do salario minimo: ");
        scanf("%f", &salario_minimo);
        if (salario_minimo < 0) {
            printf("Error: valor do salario minimo invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (salario_minimo < 0);

    valor_hora = salario_minimo * 0.1;
    salario_bruto = numero_horas_trabalhadas * valor_hora;  
    imposto = salario_bruto * 0.03;
    salario_final = salario_bruto - imposto;

    printf("\nO valor do salario liquido eh: %g\n", salario_final);  

    return 0;
}