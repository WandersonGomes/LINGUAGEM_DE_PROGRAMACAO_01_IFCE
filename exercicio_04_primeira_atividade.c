/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.2
Elabore um algoritmo que calcule e mostra a área 
de um triângulo, de um quadrado e de um retângulo 
em seguida exibi-los. Obs. Para os valores de 
entrada admitir ponto flutuante simples (float).
*/
#include <stdio.h>

//FUNCAO QUE CALCULA A AREA DE UM TRIANGULO DADO SUA BASE E ALTURA
float areaTriangulo(float base, float altura) {
    return (base * altura)/2.0;
}

//FUNCAO QUE CALCULA A AREA DE UM QUADRADO
float areaQuadrado(float lado) {
    return (lado * lado);
}

//FUNCAO QUE CALCULA A AREA DE UM RETANGULO
float areaRetangulo(float base, float altura) {
    return (base * altura);
}

//FUNCAO QUER LER O DADO O VALOR POSITIVO E NAO NULO DE UMA DIMENSAO DE UM POLIGONO
float lerDado(char* dimensao) {
    float valor = 0.0;

    do {
        printf("Informe o valor do(a) %s: ", dimensao);
        scanf("%f", &valor);
        //error
        if (valor <= 0) {
            printf("Error: %s invalida!\n", dimensao);
            printf("Tente novamente.\n");
        }
    } while (valor <= 0);

    return valor;
}


//PROGRAMA PRINCIPAL
int main() {
    float base_triangulo = 0.0, altura_triangulo = 0.0;
    float lado_quadrado = 0.0;
    float base_retangulo = 0.0, altura_retangulo = 0.0;

    //triangulo
    base_triangulo = lerDado("base do triangulo");
    altura_triangulo = lerDado("altura do triangulo");

    //quadrado
    lado_quadrado = lerDado("lado do quadrado");

    //retangulo
    base_retangulo = lerDado("base do retangulo");
    altura_retangulo = lerDado("altura do retangulo");

    //apresenta os resultados
    printf("\n");
    printf("A area do triangulo eh: %g\n", areaTriangulo(base_triangulo, altura_triangulo));
    printf("A area do quadrado eh: %g\n", areaQuadrado(lado_quadrado));
    printf("A area do retangulo eh: %g\n", areaRetangulo(base_retangulo, altura_retangulo));

    return 0;
}