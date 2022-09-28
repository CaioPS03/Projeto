#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// função que mostra as regras do jogo e faz uma apresentação
void apresentacao(char confirma) {
    setlocale(LC_ALL, "Portuguese");
    printf("Olá, caro jogador! Bem-vindo ao nosso humilde desafio. \n");
    printf("Você participará de algumas questões preparadas pelos desenvolvedores. \n");
    printf("A dificuldade e quantidade das questões vai depender da dificuldade que escolher. \n");
    printf("E então? Preparado? Se sim, pressione ENTER. ");
    scanf("%c", &confirma);
    if (confirma = 13){
        printf("Ótimo, vamos começar então!\n");
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
    printf("Vamos começar com a dificuldade. Digite 1 para fácil, 2 para médio ou 3 para difícil.\n");
    scanf("%d", &difficulty);
    if (difficulty == 1){
        printf("Vai jogar no fácil? Tá de brincadeira?");
    } else if (difficulty == 2) {
        printf("Médio? Aceitável.");
    } else if (difficulty == 3) {
        printf("Difícil? Ai sim, gostei.");
    } else {
        printf("Caractere inválido. Vai ter que reiniciar.");
    }
}

int main() {
    char confirmacao, nome[20];
    int dificuldade;
    apresentacao(confirmacao);
    jogador(nome);
    difficulty(dificuldade);
}