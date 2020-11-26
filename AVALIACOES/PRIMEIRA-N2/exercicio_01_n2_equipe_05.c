/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 01:
 Construa uma função para calcular o máximo divisor comum entre três 
 números informados e passados como parâmetros para a função. 
 Obs1.: Os números deverão ser informados pelo usuário do programa e 
 devem ser maiores que 5 e menores 100.
*/
#include <stdio.h>

//FUNCAO QUE CALCULA O MDC DE FORMA RECURSIVA
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a%b);
    }
}

//FUNCAO QUE CALCULA O MDC DE TRES NUMEROS INFORMADOS
int mdc3(int a, int b, int c) {
    return mdc(mdc(a,b), c);
}

//FUNCAO QUE FAZ A LEITURA DO NUMERO
void lerNumero(int* numero, int indice) {
    do {
        printf("Informe o %d.o numero inteiro (5 < n < 100): ", indice);
        scanf("%d", numero);

        if ((*numero <= 5) || (*numero >= 100)) {
            printf("Error: numero invalido!\nTente novamente.\n");
        }
    } while ((*numero <= 5) || (*numero >= 100));
}

//PROGRAMA PRINCIPAL
int main() {
    int numero1 = 0, numero2 = 0, numero3 = 0;
    int mdc_numeros = 0;

    lerNumero(&numero1, 1);
    lerNumero(&numero2, 2);
    lerNumero(&numero3, 3);

    mdc_numeros = mdc3(numero1, numero2, numero3);

    printf("\nO MDC de %d, %d e %d e igual a: %d\n", numero1, numero2, numero3, mdc_numeros);

    return 0;
}