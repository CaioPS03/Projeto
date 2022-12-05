#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int questaoFacil(FILE *questaoF[15]) {
    int p = 0, i, c;
    char question[100], r;
    char answer[16] = "bddcbcdcbabaadc";
    questaoF[0] = fopen("1f.txt", "r");
    questaoF[1] = fopen("2f.txt", "r");
    questaoF[2] = fopen("3f.txt", "r");
    questaoF[3] = fopen("4f.txt", "r");
    questaoF[4] = fopen("5f.txt", "r");
    questaoF[5] = fopen("6f.txt", "r");
    questaoF[6] = fopen("7f.txt", "r");
    questaoF[7] = fopen("8f.txt", "r");
    questaoF[8] = fopen("9f.txt", "r");
    questaoF[9] = fopen("10f.txt", "r");
    questaoF[10] = fopen("11f.txt", "r");
    questaoF[11] = fopen("12f.txt", "r");
    questaoF[12] = fopen("13f.txt", "r");
    questaoF[13] = fopen("14f.txt", "r");
    questaoF[14] = fopen("15f.txt", "r");

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        c = rand() % 14;

        while (fgets(question, 100, questaoF[c]) != NULL) {
            printf("%s\n", question);
        }

        fflush(stdin);
        scanf("%c", &r);

        if (r == answer[c]) {
            p++;
        }

        system("cls");
    }

    printf("\t\t\t+----------------------------------------------------------------------+\n");
    switch (p)
    {
    case 0:
        printf("\t\t\t\tVoce nao serve pra isso. Saia daqui.\n\n");
        system("pause");
        break;

    case 1:
        printf("\t\t\t\tAcertou uma so. Nao ta indo bem.\n\n");
        system("pause");
        break;

    case 2:
        printf("\t\t\t\t\tTeve dois acertos. Nao ta bom.\n\n");
        system("pause");
        break;

    case 3:
        printf("\t\t\t\tAcertou tres questoes. Razoavel.\n\n");
        system("pause");
        break;

    case 4:
        printf("\t\t\t\tQuatro? Ta indo bem.\n");
        system("pause");
        break;

    default:
        printf("\t\t\t\tCinco? Mandou bem. So tem que parar de jogar no facil.\n\n");
        system("pause");
        break;
    }
}

int questaoMedio(FILE *questaoM[20]) {
    int p = 0, i, c;
    char question[100], r;
    char answer[21] = "dddddddddddddddddddd";
    questaoM[0] = fopen("1m.txt", "r");
    questaoM[1] = fopen("2m.txt", "r");
    questaoM[2] = fopen("3m.txt", "r");
    questaoM[3] = fopen("4m.txt", "r");
    questaoM[4] = fopen("5m.txt", "r");
    questaoM[5] = fopen("6m.txt", "r");
    questaoM[6] = fopen("7m.txt", "r");
    questaoM[7] = fopen("8m.txt", "r");
    questaoM[8] = fopen("9m.txt", "r");
    questaoM[9] = fopen("10m.txt", "r");
    questaoM[10] = fopen("11m.txt", "r");
    questaoM[11] = fopen("12m.txt", "r");
    questaoM[12] = fopen("13m.txt", "r");
    questaoM[13] = fopen("14m.txt", "r");
    questaoM[14] = fopen("15m.txt", "r");
    questaoM[15] = fopen("16m.txt", "r");
    questaoM[16] = fopen("17m.txt", "r");
    questaoM[17] = fopen("18m.txt", "r");
    questaoM[18] = fopen("19m.txt", "r");
    questaoM[19] = fopen("20m.txt", "r");

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        c = rand() % 14;

        while (fgets(question, 100, questaoM[c]) != NULL) {
            printf("%s\n", question);
        }

        scanf("%c", &r);
        fflush(stdin);

        if (r == answer[c]) {
            p++;
        }

        system("cls");
    }
    
    return p;
}

int questaoDificil(FILE *questaoD[25]) {
    int p = 0, i, c;
    char question[100], r;
    char answer[26] = "ddddddddddddddddddddddddd";
    questaoD[0] = fopen("1d.txt", "r");
    questaoD[1] = fopen("2d.txt", "r");
    questaoD[2] = fopen("3d.txt", "r");
    questaoD[3] = fopen("4d.txt", "r");
    questaoD[4] = fopen("5d.txt", "r");
    questaoD[5] = fopen("6d.txt", "r");
    questaoD[6] = fopen("7d.txt", "r");
    questaoD[7] = fopen("8d.txt", "r");
    questaoD[8] = fopen("9d.txt", "r");
    questaoD[9] = fopen("10d.txt", "r");
    questaoD[10] = fopen("11d.txt", "r");
    questaoD[11] = fopen("12d.txt", "r");
    questaoD[12] = fopen("13d.txt", "r");
    questaoD[13] = fopen("14d.txt", "r");
    questaoD[14] = fopen("15d.txt", "r");
    questaoD[15] = fopen("16d.txt", "r");
    questaoD[16] = fopen("17d.txt", "r");
    questaoD[17] = fopen("18d.txt", "r");
    questaoD[18] = fopen("19d.txt", "r");
    questaoD[19] = fopen("20d.txt", "r");
    questaoD[20] = fopen("21d.txt", "r");
    questaoD[21] = fopen("22d.txt", "r");
    questaoD[22] = fopen("23d.txt", "r");
    questaoD[23] = fopen("24d.txt", "r");
    questaoD[24] = fopen("25d.txt", "r");

    srand(time(NULL));

    for (i = 0; i < 15; i++) {
        c = rand() % 14;

        while (fgets(question, 100, questaoD[c]) != NULL) {
            printf("%s\n", question);
        }

        scanf("%c", &r);
        fflush(stdin);

        if (r == answer[c]) {
            p++;
        }

        system("cls");
    }
    
    return p;
}