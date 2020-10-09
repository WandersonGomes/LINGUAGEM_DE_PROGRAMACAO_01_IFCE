/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.2
Construa um algoritmo que receba o preço de compra de 
uma mercadoria e o desconto, em seguida informa o 
valor da venda com o desconto obtido.
*/
#include <stdio.h>

int main() {
    float preco = 0.0, desconto = 0.0;
    float preco_final = 0.0;

    do {
        printf("Informe o preco da compra: ");
        scanf("%f", &preco);
        //error
        if (preco < 0) {
            printf("Error: preco invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (preco < 0);

    do {
        printf("Informe o valor do desconto: ");
        scanf("%f", &desconto);
        //error
        if (desconto > preco || desconto < 0) {
            printf("Error: valor do desconto invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (desconto > preco || desconto < 0);

    preco_final = preco - desconto;

    printf("\n");
    printf("O valor da mercadoria com o desconto eh: %g\n", preco_final);

    return 0;
}