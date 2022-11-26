#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "questoes.h"

int main()
{
    char confirmacao, nome[20];
    int dificuldade;

    FILE *questoes[15];
    questao(questoes);
}