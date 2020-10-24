/*
Faca um algoritmo que receba uma letra qualquer e retorne se ela e
uma vogal, qual e a vogal se a mesma e maiuscula ou minuscula.
*/
#include <stdio.h>

int main() {
    char letra = 'a';

    printf("Informe uma letra: ");
    letra = getchar();

    printf("\n");
    switch (letra)
    {
        case 'a': printf("VOGAL A, minuscula.\n"); break;
        case 'e': printf("VOGAL E, minuscula.\n"); break;
        case 'i': printf("VOGAL I, minuscula.\n"); break;
        case 'o': printf("VOGAL O, minuscula.\n"); break;
        case 'u': printf("VOGAL U, minuscula.\n"); break;
        case 'A': printf("VOGAL A, MAIUSCULA.\n"); break;
        case 'E': printf("VOGAL E, MAIUSCULA.\n"); break;
        case 'I': printf("VOGAL I, MAIUSCULA.\n"); break;
        case 'O': printf("VOGAL O, MAIUSCULA.\n"); break;
        case 'U': printf("VOGAL U, MAIUSCULA.\n"); break;
        default:
            printf("A letra informada nao e uma vogal!\n");
            break;
    }

    return 0;
}