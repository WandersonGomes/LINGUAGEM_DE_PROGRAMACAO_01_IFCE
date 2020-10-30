/*
Faca um algoritmo que leia os valores A, B
e informe o maior, menor ou se ambos sao 
iguais.
*/
#include <stdio.h>

int main() {
    int numeroA = 0, numeroB = 0;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &numeroA);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &numeroB);

    printf("\n");
    
    if (numeroA < numeroB) {
        printf("MAIOR: %d\n", numeroB);
        printf("MENOR: %d\n", numeroA);
    }

    if (numeroB < numeroA) {
        printf("MAIOR: %d\n", numeroA);
        printf("MENOR: %d\n", numeroB);
    }

    if (numeroA == numeroB)
        printf("OS NUMEROS SAO IGUAIS.\n");

    return 0;
}