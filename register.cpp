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

void Register()
{
    system("cls");
    FILE *fp,*fq;
    char USERNAME[20];
    char PASSWORD[20];
    gotoxy(45,7);
    printf ("ע���˺�\n");
    printf ("\t\t----------------------------------------------------------------\n");
    printf ("\t\t\t��ѡ��ע���˺ŵ����(��������):\n\t\t\t1.����Ա\n\t\t\t2.��ʦ\n\t\t\t3.ѧ��(��ʾ��ѧ���˺���ѧ��ѧ����ͬ)\n\t\t\t4.�˳�ע�����\n");
    printf ("\t\t----------------------------------------------------------------\n");
    int flag=0;
    gotoxy(57,9);
    scanf ("%d",&flag);
    switch (flag)
    {
    case 1:
        fp=fopen("name_M.txt","a+");
        fq=fopen("pass_M.txt","a+");
        break;
    case 2:
        fp=fopen("name_T.txt","a+");
        fq=fopen("pass_T.txt","a+");
        break;
    case 3:
        fp=fopen("name_S.txt","a+");
        fq=fopen("pass_S.txt","a+");
        break;
    case 4:
        return;
    default:
        system("cls");
        gotoxy(45,7);
        printf ("ע���˺�\n");
        printf ("\t\t----------------------------------------------------------------\n");
        printf("\t\t\t\t  �����Ŵ���,������������\n");
        printf ("\t\t----------------------------------------------------------------\n");
        Sleep(2000);
        return;
    }
    system("cls");
    gotoxy(45,7);
    printf ("ע���˺�\n");
    printf ("\t\t----------------------------------------------------------------\n\n");
    printf ("\t\t\t�������û���:\n");
    printf ("\t\t\t����������:\n\n");
    printf ("\t\t----------------------------------------------------------------\n");
    gotoxy(37,10);
    scanf("%s",USERNAME);
    fputs(USERNAME,fp);
    fputc('\n',fp);
    gotoxy(35,11);
    get_password(PASSWORD,20);
    fputs(PASSWORD,fq);
    fputc('\n',fq);
    fclose(fp);
    fclose(fq);
    system("cls");
    gotoxy(45,7);
    printf ("ע���˺�\n");
    printf ("\t\t----------------------------------------------------------------\n\n");
    gotoxy(45,10);
    printf("ע��ɹ�\n\n");
    printf ("\t\t----------------------------------------------------------------\n");
    Sleep(3000);
};
