
#include "function.h"
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
//#pragma comment(lib,"Winmmlib")
void welcome()
{
    int x,y,i;

    print_head();
    x=46;
    y=8;
    gotoxy(x,++y);
    printf("  ��������������  ");gotoxy(x,++y);
    printf(" ��            ��  ");gotoxy(x,++y);
    printf("��              �� ");gotoxy(x,++y);
    printf("��  ��     ��   �� ");gotoxy(x,++y);
    printf("�� ����   ����  �� ");gotoxy(x,++y);
    printf("��              �� ");gotoxy(x,++y);
    printf("��   ��    ��   ��         ");gotoxy(x,++y);
    printf(" ��   ������   ��   ����    ");gotoxy(x,++y);
    printf("  ��          ��   ��##��   ");gotoxy(x,++y);
    printf("   ������������     ����     ");gotoxy(x,++y);
    printf("      ������       ��      ");gotoxy(x,++y);
    printf("��������������������       ");gotoxy(x,++y);
    printf("      ������       ");gotoxy(x,++y);
    printf("  ��ӭʹ�ñ�����  ");




    gotoxy(24,25);
    printf("������");


    gotoxy(24,27);
    for(i=24;i<55;i++)
    {
        printf("��");
        Sleep(90);
    }
    gotoxy(24,25);
    printf("�������,�����⽨�������");

    getch();
    gotoxy(30,30);
    system("cls");
}
