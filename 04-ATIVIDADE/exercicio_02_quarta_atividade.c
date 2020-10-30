/*
NSTITUICAO: IFCE - CAMPUS TIANGUA - CE
CURSO: BACHARELADO EM CIENCIA DA COMPUTACAO
SEMESTRE: 2020.2
ALUNO: WANDERSON GOMES DA COSTA
DISCIPLINA: LINGUAGEM DE PROGRAMACAO I
PROFESSOR: RHYAN XIMENES DE BRITO

EXERCICIO 02:
Elabore um algoritmo que receba um número qualquer via teclado e 
informe se o mesmo é primo. Obs1. Utilize o laço de repetição, 
while(condicao). 
Obs2. Validar o número, não pode ser menor ou igual a Zero. 
*/
#include <stdio.h>
#include <math.h>

int main() {
    int numero = 0, i = 2, flag_primo = 1;
    double raiz = 0.00;

    do {
        printf("Informe um valor inteiro maior do que 0: ");
        scanf("%d", &numero);
        if (numero < 1) {
            printf("Error: valor invalido!\nTente novamente.\n");
        }
    } while (numero < 1);

    //confirmacao do 1 como nao primo
    if (numero == 1) {
        flag_primo = 0;
    }

    raiz = sqrt(numero);
    while (i <= raiz) {
        if (numero % i == 0) {
            flag_primo = 0;
            break;
        }
        i++;
    }

    if (flag_primo) {
        printf("\nO numero informado eh primo!\n");
    } else {
        printf("\nO numero informado nao eh primo!\n");
    }

    return 0;
}