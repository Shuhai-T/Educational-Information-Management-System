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

void input(linkStudent inf_student,Course inf_course[],Class inf_class[],
           linklocate_course lo_course,linklocate_class lo_class,int &Max1,int &Max2)
{
    int operation=1,flag;
    int num1=1,num2=1,flag1=0,flag2=0;
    while(operation)
    {
        gotoxy(40,7);
        printf("¼����Ϣ\n");
        printf ("\t\t----------------------------------------------------------------\n");
        printf ("\t\t\t��ѡ������������Ĳ���(�������):\n");
        printf ("\t\t\t1.¼��γ���Ϣ\n");
        printf ("\t\t\t2.¼��༶��Ϣ\n");
        printf ("\t\t\t3.¼��ѧ��������Ϣ\n");
        printf ("\t\t\t4.¼��ѧ���ɼ�\n");
        printf ("\t\t\t5.¼��ѧ��ѡ����Ϣ\n");
        printf ("\t\t\t6.�˳�¼��\n");
        printf ("\t\t----------------------------------------------------------------\n");
        gotoxy(57,9);
        scanf("%d",&flag);
        switch(flag)
        {
        case 1:
            system("cls");
            if ((num2=input_course(inf_course,lo_course,Max2,flag2))!=0)
            {
                inf_course=(struct Course *)realloc (inf_course,(num2+10)*sizeof(struct Course));
                flag2=num2;
                Max2=num2+10;
                input_course(inf_course,lo_course,Max2,flag2);
            }
            break;
        case 2:
            system("cls");
            if ((num1=input_class(inf_class,lo_class,Max1,flag1))!=0)
            {
                inf_class=(struct Class *)realloc (inf_class,(num1+10)*sizeof(struct Class));
                flag1=num1;
                Max1=num1+10;
                input_class(inf_class,lo_class,Max1,flag1);
            }
            break;
        case 3:
            system("cls");
            input_stu(inf_student,inf_course,inf_class,lo_course,lo_class);
            break;
        case 4:
            system("cls");
            input_stu_score(inf_student,inf_course,inf_class);
            break;
        case 5:
            system("cls");
            input_stu_course(inf_student,inf_course,inf_class,lo_course,lo_class);
            break;
        case 6:
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
