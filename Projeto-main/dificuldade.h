#include <stdio.h>
#include <stdlib.h>

// função que mostra as regras do jogo e faz uma apresentação
void apresentacao(char confirma) {
    system("cls");
    printf("Ola, caro jogador! Bem-vindo ao nosso humilde desafio. \n");
    printf("Você participara de algumas questoes preparadas pelos desenvolvedores. \n");
    printf("A dificuldade e quantidade das questoes vai depender da dificuldade que escolher. \n");
    printf("E entao? Preparado? Se sim, pressione ENTER.");
    scanf("%c", &confirma);
    if (confirma = 13){
        printf("Otimo, vamos começar entao!\n");
    }
}

// função que pega o nome do jogador
static char* jogador(char identificacao[]) {
    printf("Primeiro de tudo... Qual o seu nome? \n");
    scanf("%s", identificacao);
    printf("Beleza, %s, agora vai!\n", identificacao);
    return identificacao;
}

// função que seleciona a dificuldade
int difficulty(int difficulty) {
    printf("Vamos começar com a dificuldade. Digite 1 para facil, 2 para medio ou 3 para dificil.\n");
    scanf("%d", &difficulty);
    if (difficulty == 1){
        printf("Vai jogar no facil? Tá de brincadeira?\n");
    } else if (difficulty == 2) {
        printf("Medio? Aceitavel.\n");
    } else if (difficulty == 3) {
        printf("Dificil? Ai sim, gostei.\n");
    } else {
        printf("Caractere invalido. Vai ter que reiniciar.\n");
    }
    return difficulty;
}