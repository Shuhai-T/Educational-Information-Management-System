#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include"function.h"
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
using namespace std;
void modify(linkStudent &inf_student,Course inf_course[],Class inf_class[],
            linklocate_course lo_course,linklocate_class lo_class,int &Max1,int &Max2)
{
    int operation=1,flag;
    while(operation)
    {
        gotoxy(40,7);
        printf("�޸���Ϣ\n");
        printf ("\t\t----------------------------------------------------------------\n");
        printf ("\t\t\t��ѡ������������Ĳ���(�������):\n");
        printf ("\t\t\t1.�޸�ѧ����Ϣ\n");
        printf ("\t\t\t2.ɾ��ѧ����Ϣ\n");
        printf ("\t\t\t3.�������˵�\n");
        printf ("\t\t----------------------------------------------------------------\n");
        gotoxy(57,9);
        scanf("%d",&flag);
        switch(flag)
        {
        case 1:
            system("cls");
            modify_stu(inf_student,inf_course,inf_class);
            break;
        case 2:
            system("cls");
            dele_stu(inf_student,inf_course,inf_class);
            break;
        case 3:
            system("cls");
            return;
        default:
            system("cls");
            gotoxy(40,7);
            printf("�޸���Ϣ\n");
            printf ("\t\t----------------------------------------------------------------\n");
            printf ("\t\t\t\t������Ŵ���,����������\n");
            printf ("\t\t----------------------------------------------------------------\n");
            Sleep(2000);
        }
        system("cls");
    }
};
