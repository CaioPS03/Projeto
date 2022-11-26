#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "iniciar.h"
#include "dificuldade.h"
#include "questoes.h"


int main() {
    char nome[20];
    int dificuldade, op, pt;
    FILE *questoesF[15], *questoesM[20], *questoesD[25];
        do { op = iniciar(op);
        switch (op) {
        case 1:
            apresentacao();
            jogador(nome);
            dificuldade = difficulty(dificuldade);
            switch (dificuldade) {
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
            break;

        case 3:
            system("cls");
            break;
        
        default:
            break;
            }
        }while (op != 3);
}