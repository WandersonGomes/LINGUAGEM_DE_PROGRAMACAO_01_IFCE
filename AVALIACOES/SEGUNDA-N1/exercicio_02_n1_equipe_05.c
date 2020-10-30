/*
IFCE - Instituto Federal do Ceara - Campus Tiangua - CE
Nome: Wanderson Gomes da Costa
Disciplina: Linguagem de Programacao - I
Segundo semestre (Bacharelado em Ciencia da Computacao) - 2020.2

Questao 02:
Em um hotel, o dono está muito preocupado com as contas de telefone. 
Ele chamou uma equipe de alunos do 4º período de Computação do IFCE 
para fazer um algoritmo para conferir a duração em minutos das 
ligações de cada tipo escolhida. Os tipos de ligações são: 
    “a cobrar”, 
    "internacional", 
    “interurbano” e 
    “local”. 
Faça um algoritmo que, sabendo o tipo de ligação, efetue a somatória 
do tempo em minutos para cada tipo e escreva no final a quantidade de 
minutos de cada uma delas. O algoritmo se encerra quando para o tipo 
de ligação for informado "fim". 

Obs1. Validar os dados. 
Obs2. Usar o laço de repetição for. 
Obs3. Para o tempo de cada ligação considerar a hora de início e fim 
      da ligação. 
Obs4. A hora deve ser no formato hh:mm, não considerar segundos. 
Obs5. A hora da finalização não pode ser menor que a hora do início. 
Obs6. Considerar para o sistema um dia com 24h.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void paraMaiusculo(char *string) {
    int i = 0, tamanho = 0;
    tamanho = strlen(string);

    for (i = 0; i < tamanho; i++) {
        string[i] = toupper(string[i]);
    }
}

int horarioValido(int hora, int minuto) {
    if ((hora < 0) || (hora > 23)) {
        return 0;
    }
    if ((minuto < 0) || (minuto > 59)) {
        return 0;
    }
    return 1;
}

int tipoLigacaoValida(char *string) {
    if (strcmp(string, "A COBRAR\n") == 0) {
        return 1;
    }
    if (strcmp(string, "INTERNACIONAL\n") == 0) {
        return 2;
    }
    if (strcmp(string, "INTERURBANO\n") == 0) {
        return 3;
    }
    if (strcmp(string, "LOCAL\n") == 0) {
        return 4;
    }

    return 0;
}

int main() {
    char tipo_ligacao[15];
    int tipo = 0, minutos = 0, i = 0;
    int cobrar = 0, internacional = 0, interurbano = 0, local = 0;
    int inicio_hora = 0, fim_hora = 0, inicio_minuto = 0, fim_minuto = 0;

    while (1) {
        printf("Informe o tipo de ligacao:\n");
        printf("A cobrar\n");
        printf("Internacional\n");
        printf("Interurbano\n");
        printf("Local\n");
        printf("(Digite FIM para encerrar!)\n");
        printf("Tipo: ");
        fgets(tipo_ligacao, 15, stdin);

        paraMaiusculo(tipo_ligacao);

        if (strcmp(tipo_ligacao, "FIM\n") == 0) {
            break;
        }

        tipo = tipoLigacaoValida(tipo_ligacao);
        
        if (tipo > 0) {
            minutos = 0;

            do {
                printf("Informe a hora de inicio da ligacao (hh:mm): ");
                scanf("%d:%d", &inicio_hora, &inicio_minuto);
                if (horarioValido(inicio_hora, inicio_minuto) == 0) {
                    printf("Error: horario invalido!\nTente novamente.\n");
                }
            } while (horarioValido(inicio_hora, inicio_minuto) == 0);

            do {
                printf("Informe a hora de fim da ligacao (hh:mm): ");
                scanf("%d:%d", &fim_hora, &fim_minuto);
                if ((horarioValido(fim_hora, fim_minuto) == 0) || ((fim_hora == inicio_hora) && (fim_minuto <= inicio_minuto)) || (fim_hora < inicio_hora)) {
                    printf("Error: horario invalido!\nTente novamente.\n");
                }
            } while ((horarioValido(fim_hora, fim_minuto) == 0) || ((fim_hora == inicio_hora) && (fim_minuto <= inicio_minuto)) || (fim_hora < inicio_hora));

            getchar();

            for (i = inicio_hora; i < fim_hora; i++) {
                minutos += 60;
            }

            if (inicio_hora != fim_hora) {
                if (inicio_minuto != fim_minuto) {
                    for (i = inicio_minuto; i < 60; i++) {
                        minutos++;
                    }
                    for (i = 0; i < fim_minuto; i++) {
                        minutos++;
                    }
                }
            } else {
                for (i = inicio_minuto; i < fim_minuto; i++) {
                    minutos++;
                }
            }

            switch (tipo) {
                case 1: cobrar += minutos; break;
                case 2: internacional += minutos; break;
                case 3: interurbano += minutos; break;
                case 4: local += minutos; break;
            }
        } else {
            printf("\nError: Tipo de Ligacao nao reconhecida!\n\n");
        }
    }

    printf("\nMINUTOS:\n");
    printf("A COBRAR: %d\n", cobrar);
    printf("INTERNACIONAL: %d\n", internacional);
    printf("INTERURBANO: %d\n", interurbano);
    printf("LOCAL: %d\n", local);

    return 0;
}