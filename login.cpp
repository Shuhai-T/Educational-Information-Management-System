#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>

void get_password(char *pswd, int maxlen)
{
    int index = 0;
    char buff = '\0';

    while ((buff = getch()) != '\r')
    {
        if (buff == '\b' && index != 0)
        {
            index--;
            printf("\b \b");
        }
        else if (index < maxlen - 1 && buff != '\b')
        {
            pswd[index++] = buff;
            putchar('*');
        }
    }
    pswd[index] = '\0';
};

int login(char name[])
{
    int flag;
    int j=5;
    char username[20],password[20];
    while (j--)
    {
        gotoxy(32,6);
        printf("****************�û���¼****************");
        gotoxy(32,7);
        printf ("�������ʺ�:");
        scanf("%s",username);
        gotoxy(32,8);
        printf("����������:");
        get_password(password,20);
//        printf("password=%s\n",password);
        if ((flag=if_loginuser(username,password))>0)
        {
            if(flag==3)
            {
                strcpy(name,username);
            }
            gotoxy (32,9);
            printf ("****************��¼�ɹ�****************\n");
//            Sleep(2000);
            return flag;
        }
        else
        {
            gotoxy (32,9);
            printf ("*******�˺Ż��������,����������********");
            Sleep(1000);
            system("cls");
        }

    }
    printf("��������ε�¼ʧ�ܣ������Զ�����");
    exit(1);
};

