#include <stdio.h>
#include <stdlib.h>

// função que mostra as regras do jogo e faz uma apresentação
void apresentacao()
{
    char confirma;
    system("cls");
    printf("Ola, caro jogador! Bem-vindo ao nosso humilde desafio. \n");
    printf("Você participara de algumas questoes preparadas pelos desenvolvedores. \n");
    printf("A dificuldade e quantidade das questoes vai depender da dificuldade que escolher. \n");
    printf("E entao? Preparado? ");
    system("pause");
}

// função que pega o nome do jogador
static char *jogador(char identificacao[])
{
    system("cls");
    printf("Primeiro de tudo... Qual o seu nome? \n");
    scanf("%s", identificacao);
    printf("Beleza, %s, agora vai!\n", identificacao);
    return identificacao;
}

// função que seleciona a dificuldade
int difficulty(int difficulty)
{
    system("cls");
    int r = 1;
    printf("Vamos começar com a dificuldade. Digite 1 para facil, 2 para medio ou 3 para dificil.\n");

    do
    {
        scanf("%d", &difficulty);

        switch (difficulty)
        {
        case 1:
            printf("Vai jogar no facil? Ta de brincadeira?\n");
            system("pause");
            system("cls");
            r = 0;
            break;

        case 2:
            printf("Medio? Aceitavel.\n");
            system("pause");
            system("cls");
            r = 0;
            break;

        case 3:
            printf("Dificil? Ai sim, gostei.\n");
            system("pause");
            system("cls");
            r = 0;
            break;

        default:
            printf("Caractere invalido. Digite um caractere valido.\n");
            system("pause");
        }
    } while (r != 0);

    return difficulty;
}