/*
INSTITUICAO: IFCE - CAMPUS TIANGUA - CE
CURSO: BACHARELADO EM CIENCIA DA COMPUTACAO
SEMESTRE: 2020.2
ALUNO: WANDERSON GOMES DA COSTA
DISCIPLINA: LINGUAGEM DE PROGRAMACAO I
PROFESSOR: RHYAN XIMENES DE BRITO

EXERCICIO 06:
João abriu uma lanchonete e você foi requisitado para desenvolver um software para ele. 
Sabemos que a principio João somente oferecerá alguns tipos de produtos. 
Esse produtos estando em promoção de estreia são: 

    1) misto quente + suco de uva = 2.15; 
    2) hambúrguer + coca-cola = 4.50; 
    3) caldo de cana + pastel = 2.40; 
    4) coxinha + guaraná = 2.30; 
    5) fatia bolo + suco acerola = 1.80; 
    6) pudim = 2.0. 

Com base nessas informações elabore um programinha onde o cliente escolherá sua opção através 
de um sistema de códigos, para que com base nesses códigos o balconista saiba o valor que deva 
ser cobrado do cliente. 

Obs. Utilizar a estrutura de múltipla escolha.
*/
#include <stdio.h>

int main() {
    int produto = 0;
    float valor_pedido = 0.0;

    printf("Informe o codigo do produto:\n");
    printf("1) misto quente + suco de uva\n"); 
    printf("2) hambúrguer + coca-cola\n"); 
    printf("3) caldo de cana + pastel\n"); 
    printf("4) coxinha + guaraná\n"); 
    printf("5) fatia bolo + suco acerola\n"); 
    printf("6) pudim.\n");
    printf("Produto: ");
    scanf("%d", &produto);

    printf("\n");
    switch (produto) {
        case 1: printf("O valor do pedido e: 2.15\n"); break;
        case 2: printf("O valor do pedido e: 4.50\n"); break;
        case 3: printf("O valor do pedido e: 2.40\n"); break;
        case 4: printf("O valor do pedido e: 2.30\n"); break;
        case 5: printf("O valor do pedido e: 1.80\n"); break;
        case 6: printf("O valor do pedido e: 2.00\n"); break;
        default:
            printf("Produto nao encontrado!\n");
            break;
    }

    return 0;
}