#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int questao(FILE *questao[15])
{
    int p = 0, i, c;
    char question[100], r;
    char answer[16] = "ddddddddddddddd";
    questao[0] = fopen("1.txt", "r");
    questao[1] = fopen("2.txt", "r");
    questao[2] = fopen("3.txt", "r");
    questao[3] = fopen("4.txt", "r");
    questao[4] = fopen("5.txt", "r");
    questao[5] = fopen("6.txt", "r");
    questao[6] = fopen("7.txt", "r");
    questao[7] = fopen("8.txt", "r");
    questao[8] = fopen("9.txt", "r");
    questao[9] = fopen("10.txt", "r");
    questao[10] = fopen("11.txt", "r");
    questao[11] = fopen("12.txt", "r");
    questao[12] = fopen("13.txt", "r");
    questao[13] = fopen("14.txt", "r");
    questao[14] = fopen("15.txt", "r");

    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        system("cls");
        c = rand() % 14;
        while (fgets(question, 100, questao[c]) != NULL)
        {
            printf("%s\n", question);
        }

        scanf("%c", &r);

        if (r == 10)
        {
            scanf("%c", &r);
        }

        if (r == answer[c])
        {
            p++;
        }
    }

    return c;
}