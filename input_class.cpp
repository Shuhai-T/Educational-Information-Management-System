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

struct locate_class *findlast_loclass(linklocate_class L)
{
    linklocate_class r;
    r=new locate_class;
    r=L;
    while(L->next!=NULL)
    {
        L=L->next;
        r=L;
    }
    return r;
};

int input_class(Class L[],linklocate_class &lo_class,int Max,int flag)
{
    //�ҵ�β�ڵ�
    linklocate_class p,r;
    p=new locate_class;
    r=new locate_class;
    r=findlast_loclass(lo_class);
    //�ҵ�β�ڵ�
    int num;
    gotoxy(40,3);
    printf("¼��༶��Ϣ\n");
    printf ("\t\t----------------------------------------------------------------\n");
    if (flag==0)
    {
        printf ("\t\t\t������༶���(����0��������):");
        scanf ("%d",&num);
        if (num>Max)
        {
            system("cls");
            return num;
        }
    }
    else
    {
        num=flag;
        printf ("\t\t\t������༶���(����0��������):%d\n",num);
    }

    //��ȡ����λ��
    p->num=num;
    p->next=NULL;
    r->next=p;
    r=p;
    //��ȡ����λ��
    L[num].numbing=num;
    printf ("\t\t\t������༶��:");
    scanf ("%s",L[num].class_num);
    printf ("\t\t\t������༶����:");
    scanf ("%s",L[num].class_name);
    printf ("\t\t\t������ѧ������:");
    scanf ("%d",&L[num].stu_num);
    printf ("\t\t\t�����������꼶:");
    scanf ("%s",L[num].grade);
    L[num].flag=1;
    printf ("\t\t\t\t¼�����\n");
    printf ("\t\t----------------------------------------------------------------\n");
    printf ("\t\t\t");
    system("pause");
    return 0;
};
