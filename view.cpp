#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include"function.h"
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
using namespace std;

void view(linkStudent inf_student,Course inf_course[],Class inf_class[],linklocate_course lo_course,linklocate_class lo_class)
{
    int flag=0,operation=1;
    while (operation)
    {
        gotoxy(40,7);
        printf("�鿴��Ϣ\n");
        printf ("\t\t----------------------------------------------------------------\n");
        printf ("\t\t\t��ѡ������������Ĳ���(�������):\n");
        printf ("\t\t\t1.�鿴ѧ����Ϣ\n");
        printf ("\t\t\t2.�鿴�༶��Ϣ(ѧ��ѡ����������Գɼ�)\n");
        printf ("\t\t\t3.�鿴�γ���Ϣ\n");
        printf ("\t\t\t4.�鿴����ѧ������ѧ�ּ��������γ�\n");
        printf ("\t\t\t5.����\n");
        printf ("\t\t----------------------------------------------------------------\n");
        gotoxy(57,9);
        scanf("%d",&flag);
        switch(flag)
        {
        case 1:
            system("cls");
            see_stu(inf_student);
            break;
        case 2:
            system("cls");
            see_class(inf_class);
            break;
        case 3:
            system("cls");
            see_course(inf_course,lo_course);
            break;
        case 4:
            system("cls");
            see_all_stu(inf_student);
            break;
        case 5:
            system("cls");
            return;
        default:
            system("cls");
            gotoxy(40,7);
            printf("�鿴��Ϣ\n");
            printf ("\t\t----------------------------------------------------------------\n");
            printf ("\t\t\t\t������Ŵ���,����������\n");
            printf ("\t\t----------------------------------------------------------------\n");
            Sleep(2000);
        }
        system("cls");
    }
};
