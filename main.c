#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include "iniciar.h"

typedef enum
{
    BLACK,
    BLUE,
    GREEN,
    CYAN,
    RED,
    MAGENTA,
    BROWN,
    LIGHTGRAY,
    DARKGRAY,
    LIGHTBLUE,
    LIGHTGREEN,
    LIGHTCYAN,
    LIGHTRED,
    LIGHTMAGENTA,
    YELLOW,
    WHITE
} COLORS;
static int __BACKGROUND = BLACK;
static int __FOREGROUND = LIGHTGRAY;

void textcolor(int letra, int fundo)
{
    __FOREGROUND = letra;
    __BACKGROUND = fundo;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
                            letra + (__BACKGROUND << 4));
}
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void sair()
{
    textcolor(11, 3);
    gotoxy(0, 20);
    printf("Saindo . . . !    tecle\n\n");
    getch();
    textcolor(7, 0);
    exit(0);
}
int main()
{
    int li = 3, tecla;
    setlocale(LC_ALL, "");
    do
    {
        textcolor(2, 0);
        system("cls");
        printf("\t\t\t+----------------------------------------------------------------------+\n");
        printf("\t\t\t|                                 Menu                                 |\n");
        printf("\t\t\t+----------------------------------------------------------------------+\n");
        printf("\t\t\t|                            1 - Iniciar                               |\n");
        printf("\t\t\t|                            2 - Sair                                  |\n");
        printf("\t\t\t+----------------------------------------------------------------------+\n");
        gotoxy(50, li);
        printf("->");
        gotoxy(79, 24);
        do
        {
            tecla = 0;
            if (kbhit())
            {
                tecla = getch();
                gotoxy(50, li);
                printf("  ");
                if (tecla == 224)
                    tecla = getch();
                if (tecla == 72)
                    li--;
                else if (tecla == 80)
                    li++;
                if (li > 4)
                    li = 3;
                else if (li < 3)
                    li = 4;
                gotoxy(50, li);
                printf("->");
                gotoxy(79, 24);
            }
        } while (tecla != 13);
        system("cls");
        switch (li)
        {
        case 3:
            iniciar();
            break;

        case 4:
            exit(0);
        }
    } while (li != 6);
    textcolor(7, 0);
    return 0;
}