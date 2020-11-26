/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 02:
Construa uma função para calcular o mínimo múltiplo comum entre 4 números 
informados e passados como parâmetros para a função. 
Obs1.: Os números deverão ser informados pelo usuário do programa e devem 
ser maiores que 3 e menores 150.
*/
#include <stdio.h>

//FUNCAO QUE CALCULA O MDC
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        mdc(b, a%b);
    }
}

//FUNCAO QUE CALCULA O MMC
int mmc(int a, int b) {
    return (a*b)/mdc(a, b);
}

//FUNCAO QUE CALCULAR O MMC DE 4 NUMEROS
int mmc4(int a, int b, int c, int d) {
    return mmc(mmc(a, b), mmc(c, d));
}

//FUNCAOQ QUE FAZ A LEITURA DO NUMERO
void lerNumero(int* numero, int indice) {
    do {
        printf("Informe o %d.o numero (3 < n < 150): ", indice);
        scanf("%d", numero);
        if ((*numero <= 3) || (*numero >= 150)) {
            printf("Error: numero invalido!\nTente novamente.\n");
        }
    } while ((*numero <= 3) || (*numero >= 150));
}

//PROGRAMA PRINCIPAL
int main() {
    int numero1 = 0, numero2 = 0, numero3 = 0, numero4 = 0;
    int mmc_numeros = 0;

    lerNumero(&numero1, 1);
    lerNumero(&numero2, 2);
    lerNumero(&numero3, 3);
    lerNumero(&numero4, 4);

    mmc_numeros = mmc4(numero1, numero2, numero3, numero4);

    printf("\nO MMC de %d, %d, %d e %d e igual a: %d\n", numero1, numero2, numero3, numero4, mmc_numeros);

    return 0;
}