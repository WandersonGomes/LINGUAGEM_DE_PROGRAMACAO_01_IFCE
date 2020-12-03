/*
Autor: Wanderson Gomes da Costa
Instituicao: IFCE - Campus Tiangua
Professor: Rhyan Ximenes de Brito
Disciplina: Linguagem de Programacao I

Questao 01:
Construa uma função que receba um valor inteiro positivo e 
retorne o fatorial desse número. Obs1.: 0! ou 1! = 1
*/
#include <stdio.h>

//FUNCAO QUE RETORNA O VALOR DO FATORIAL DE UM NUMERO
long long int calculaFatorial(int numero) {
    long long int resultado = 1;

    if (numero < 0) {
        return -1;
    }
    if ((numero == 0) || (numero == 1)) {
        return 1;
    }

    while (numero > 0) {
        resultado *= numero;
        numero--;
    }

    return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
    int numero = 0;
    long long int fatorial = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    fatorial = calculaFatorial(numero);

    printf("\nO fatorial de %d e igual a: %lld\n", numero, fatorial);

    return 0;
}