#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include"function.h"
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
using namespace std;

void Register_M()
{
    system("cls");
    FILE *fp,*fq;
    char USERNAME[20];
    char PASSWORD[20];
    int flag=0;
    fp=fopen("name_M.txt","a+");
    fq=fopen("pass_M.txt","a+");
    system("cls");
    gotoxy(58,7);
    printf ("ע�����Ա�˺�\n");
    printf ("\t\t\t\t----------------------------------------------------------------\n\n");
    printf ("\t\t\t\t\t�������û���:\n");
    printf ("\t\t\t\t\t����������:\n\n");
    printf ("\t\t\t\t----------------------------------------------------------------\n");
    gotoxy(53,10);
    scanf("%s",USERNAME);
    fputs(USERNAME,fp);
    fputc('\n',fp);
    gotoxy(51,11);
    get_password(PASSWORD,20);
    fputs(PASSWORD,fq);
    fputc('\n',fq);
    fclose(fp);
    fclose(fq);
    system("cls");
    gotoxy(58,7);
    printf ("ע���˺�\n");
    printf ("\t\t\t\t----------------------------------------------------------------\n\n");
    gotoxy(58,10);
    printf("ע��ɹ�\n\n");
    printf ("\t\t\t\t----------------------------------------------------------------\n");
    Sleep(3000);
};
