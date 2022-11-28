#include <stdio.h>
#include <stdlib.h>

// função que mostra as regras do jogo e faz uma apresentação
void apresentacao()
{
    system("cls");
    printf("\t\t+--------------------------------------------------------------------------------------+\n");
    printf("\t\t|                Ola, caro jogador! Bem-vindo ao nosso humilde desafio.                |\n");
    printf("\t\t|        Voce participara de algumas questoes preparadas pelos desenvolvedores.        |\n");
    printf("\t\t|  A dificuldade e quantidade das questoes vai depender da dificuldade que escolher.   |\n");
    printf("\t\t|                                  E entao? Preparado?                                 |\n");
    printf("\t\t+--------------------------------------------------------------------------------------+\n");
    printf("\n");
    system("pause");
}

// função que pega o nome do jogador
static char *jogador(char identificacao[])
{
    system("cls");
    printf("\t\t\t+----------------------------------------------------------------------+\n");
    printf("\t\t\t|                 Primeiro de tudo... Qual o seu nome?                 |\n");
    printf("\t\t\t+----------------------------------------------------------------------+\n");
    printf("\n");
    scanf("%s", identificacao);
    printf("\t\t\t+----------------------------------------------------------------------+\n");
    printf("\t\t\t                      Beleza, %s, agora vai!                            \n", identificacao);
    printf("\t\t\t+----------------------------------------------------------------------+\n");
    printf("\n");
    system("pause");
    return identificacao;
}

// função que seleciona a dificuldade
int difficulty(int difficulty)
{
    system("cls");
    int r = 1;

    do
    {
        printf("\t\t\t+----------------------------------------------------------------------+\n");
        printf("\t\t\t                    Vamos comecar com a dificuldade.                    \n"); 
        printf("\t\t\t           Digite 1 para facil, 2 para medio ou 3 para dificil.         \n");
        printf("\n");
        scanf("\t\t\t%d", &difficulty);

        switch (difficulty)
        {
        case 1:
            printf("\t\t\t                  Vai jogar no facil? Ta de brincadeira?\n");
            printf("\t\t\t+----------------------------------------------------------------------+\n");
            printf("\n");
            system("pause");
            system("cls");
            r = 0;
            break;

        case 2:
            printf("\t\t\t                            Medio? Aceitavel.\n");
            printf("\t\t\t+----------------------------------------------------------------------+\n");
            printf("\n");
            system("pause");
            system("cls");
            r = 0;
            break;

        case 3:
            printf("\t\t\t                         Dificil? Ai sim, gostei.\n");
            printf("\t\t\t+----------------------------------------------------------------------+\n");
            printf("\n");
            system("pause");
            system("cls");
            r = 0;
            break;

        default:
            printf("\t\t\t                Caractere invalido. Digite um caractere valido.\n");
            printf("\t\t\t+----------------------------------------------------------------------+\n");
            printf("\n");
            system("pause");
            system("cls");
            fflush(stdin);
            break;
        }
    } while (r != 0);

    return difficulty;
}