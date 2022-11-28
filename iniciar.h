#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "dificuldade.h"
#include "questoes.h"

int iniciar()
{
    char nome[20];
    int dificuldade, pt;
    FILE *questoesF[15], *questoesM[20], *questoesD[25];
    
    apresentacao();
    jogador(nome);
    dificuldade = difficulty(dificuldade);
    switch (dificuldade)
    {
    case 1:
        pt = questaoFacil(questoesF);
        break;

    case 2:
        pt = questaoMedio(questoesM);
        break;

    case 3:
        pt = questaoDificil(questoesD);
        break;

    default:
        break;
    }

    return pt;
}