#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// função que mostra as regras do jogo e faz uma apresentação
int apresentacao(char confirma) {
    setlocale(LC_ALL, "Portuguese");
    printf("Olá, caro jogador! Bem-vindo ao nosso humilde desafio. \n");
    printf("Você participará de algumas questões preparadas pelos desenvolvedores. \n");
    printf("A dificuldade e quantidade das questões vai depender da dificuldade que escolher. \n");
    printf("E então? Preparado? Se sim, pressione ENTER. ");
    scanf("%c", &confirma);
    if (confirma = 13){
        printf("Ótimo, vamos começar então!");
    }
}

// função que pega o nome do jogador
static char nomeJogador(char nome) {
    printf("\nAh! Quase me esqueci. Preciso do seu nome: ");
    scanf("%s", &nome);
    printf("Beleza, agora vai!\n");
    return nome;
}

int difficulty(char difficulty) {
    printf("Vamos começar com a dificuldade. Digite F para fácil, M para médio ou D para difícil.\n");
    scanf("%c", &difficulty);
    if (difficulty == 'F'){
        printf("Vai jogar no fácil? Tá de brincadeira?");
    } else if (difficulty == 'M') {
        printf("Médio? Aceitável.");
    } else if (difficulty == 'D') {
        printf("Difícil? Ai sim, gostei.");
    } else {
        printf("Caractere inválido. Vai ter que reiniciar.");
    }
}

int main() {
    char confirmacao, jogador, dificuldade;
    apresentacao(confirmacao);
    nomeJogador(jogador);
    difficulty(dificuldade);
}