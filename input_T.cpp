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

void input_T(linkStudent inf_student,Course inf_course[],Class inf_class[],
           linklocate_course lo_course,linklocate_class lo_class,int &Max1,int &Max2)
{
    int operation=1,flag;
    int num1=1,num2=1,flag1=0,flag2=0;
    while(operation)
    {
        gotoxy(40,7);
        printf("¼����Ϣ\n");
        printf ("\t\t----------------------------------------------------------------\n");
        printf("\t\t\t��ѡ������������Ĳ���(�������):\n");
        printf ("\t\t\t1.¼��ѧ��������Ϣ\n");
        printf ("\t\t\t2.¼��ѧ���ɼ�\n");
        printf ("\t\t\t3.¼��ѧ��ѡ����Ϣ\n");
        printf ("\t\t\t4.�˳�¼��\n");
        printf ("\t\t----------------------------------------------------------------\n");
        gotoxy(57,9);
        scanf("%d",&flag);
        switch(flag)
        {
        case 1:
            system("cls");
            input_stu(inf_student,inf_course,inf_class,lo_course,lo_class);
            break;
        case 2:
            system("cls");
            input_stu_score(inf_student,inf_course,inf_class);
            break;
        case 3:
            system("cls");
            input_stu_course(inf_student,inf_course,inf_class,lo_course,lo_class);
            break;
        case 4:
            system("cls");
            return;
        default:
            system("cls");
            gotoxy(40,7);
            printf("¼����Ϣ\n");
            printf ("\t\t----------------------------------------------------------------\n");
            printf ("\t\t\t\t������Ŵ���,����������\n");
            printf ("\t\t----------------------------------------------------------------\n");
            Sleep(2000);
        }
        system("cls");
    }
};
