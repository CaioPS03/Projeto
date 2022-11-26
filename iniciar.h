#include <stdio.h>
#include <stdlib.h>

int iniciar(int op) {
    int a;
    while (a != 1) {
        system("cls");
        printf("=======================================================================================================================\n");
        printf("||                                                  1- Iniciar                                                       ||\n");
        printf("||                                                 2- Pontuacao                                                      ||\n");
        printf("||                                                   3- Sair                                                         ||\n");
        printf("=======================================================================================================================\n");
        printf("\n");
        printf("Selecione uma opcao: ");
        scanf("%d", &op);
        if (op != 1 && op != 2 && op != 3) {
            printf("Caratere invalido. ");
            system("pause");
        }else {a = 1;}
    }
    return op;
}
