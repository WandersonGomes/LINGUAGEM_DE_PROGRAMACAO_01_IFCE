/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 03:
Construa uma função para sortear 10 números e armazená-los em um 
vetor de tamanho 10 . Em seguida, calcule o fatorial dos números 
menores que 10 armazenados e exiba-os. 
Obs/Sugestão.: Os números do sorteio podem ser gerados 
randomicamente.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//FUNCAO QUE GERA UM VETOR COM 10 VALORES
void preencheNumeros(int* numeros) {
    int i = 0;

    srand(time(NULL));

    for (; i < 10; i++) {
        numeros[i] = rand()%100;
    }
}

//FUNCAO QUE RETORNA O FATORIAL DE UM NUMERO MENOR QUE 10
int fatorial(int numero) {
    int resultado = 1;
    if (numero <= 1) {
        return resultado;
    }

    while (numero > 0) {
        resultado = numero * resultado;
        numero--;
    }

    return resultado;
}

//FUNCAO QUE APRESENTA O FATORIAL DOS VALORES MENORES QUE 10 NO VETOR
void apresentaFatorial(int* numeros) {
    int i = 0;
    
    for(i = 0; i < 10; i++) {
        if (numeros[i] < 10) {
            printf("Fatorial %d: %d\n", numeros[i], fatorial(numeros[i]));
        }
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int numeros[10] = {0}, i = 0;

    preencheNumeros(numeros);

    printf("Numeros gerados: ");
    for (; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    apresentaFatorial(numeros);

    return 0;
}