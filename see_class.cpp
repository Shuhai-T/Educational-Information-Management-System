#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include"function.h"
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
using namespace std;

void see_class(Class L[])
{
    int i,num;
    gotoxy(40,3);
    printf("��ѯ�༶��Ϣ\n");
    printf ("\t\t----------------------------------------------------------------\n");
    printf ("\t\t\t�������ѯ�İ༶���:");
    scanf("%d",&num);
    if (L[num].flag!=1)
    {
        printf ("\t\t\t�����ڸð༶��Ϣ,���˳���ѯ\n");
        Sleep(2000);
        return;
    }
    printf ("\t\t\t�༶��Ϊ:%s\n",L[num].class_num);
    printf ("\t\t\t�༶��Ϊ:%s\n",L[num].class_name);
    printf ("\t\t\t�༶�����꼶:%s\n",L[num].grade);
    printf("\t\t\t�༶����Ϊ:%d\n",L[num].stu_num);
    if (L[num].inpustu>=1)
    {
        printf ("\t\t\t�༶ѧ������:\n");
    }else
    {
        printf ("\t\t\tδ¼��༶ѧ����Ϣ\n");
    }

    for (i=0;i<L[num].inpustu;i++)
    {
        printf ("\t\t\t%d:%s\n",i+1,L[num].stu_name[i]);
    }
    printf ("\t\t\t�༶��ѡ�γ���:%d\n\n",L[num].course_num);
    for (i=0; i<L[num].course_num; i++)
    {
        printf ("\t\t\t��%d���γ�\n",i+1);
        printf ("\t\t\t�γ���:%s\n",L[num].course[i]);
        printf ("\t\t\tƽ���ɼ�:%.2lf\n\n",L[num].averscore[i]);
    }
    printf ("\t\t\t\t\tComplete\n");
    printf ("\t\t----------------------------------------------------------------\n");
    printf ("\t\t\t");
    system("pause");
};
