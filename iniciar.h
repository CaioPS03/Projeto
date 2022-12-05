#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "dificuldade.h"
#include "questoes.h"

void iniciar()
{
    char nome[20];
    int dificuldade;
    FILE *questoesF[15], *questoesM[20], *questoesD[25];
    
    apresentacao();
    jogador(nome);
    dificuldade = difficulty(dificuldade);
    switch (dificuldade)
    {
    case 1:
        questaoFacil(questoesF);
        break;

    case 2:
        questaoMedio(questoesM);
        break;

    case 3:
        questaoDificil(questoesD);
        break;

    default:
        break;
    }
}