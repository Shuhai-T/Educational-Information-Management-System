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

struct locate_course *findlast_locourse(linklocate_course L)
{
    linklocate_course r;
    r=new locate_course;
    r=L;
    while(L->next!=NULL)
    {
        L=L->next;
        r=L;
    }
    return r;
};

int input_course(Course inf_course[],linklocate_course &lo_course,int Max,int flag)
{
    //�ҵ�β�ڵ�
    linklocate_course p,r;
    p=new locate_course;
    r=new locate_course;
    r=findlast_locourse(lo_course);
    //�ҵ�β�ڵ�
    int num,i,j,k;
    gotoxy(40,3);
    printf("¼��γ���Ϣ\n");
    printf ("\t\t----------------------------------------------------------------\n");
    if (flag==0)
    {
        printf ("\t\t\t������γ̱��(����0��������):");
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
        printf ("\t\t\t������γ̱��(����0��������):%d\n",num);
    }
    //��ȡ����λ��
    p->num=num;
    p->next=NULL;
    r->next=p;
    r=p;
    //��ȡ����λ��
    inf_course[num].numbering=num;
    printf ("\t\t\t������γ�����:");
    scanf ("%s",inf_course[num].name);
    printf ("\t\t\t������γ�ѧ��:");
    scanf ("%d",&inf_course[num].score);
    printf ("\t\t\t�����뱾�γ�һ���Ͽν���:");
    scanf ("%d",&inf_course[num].section);
    for (i=0;i<inf_course[num].section;i++)
    {
        printf ("\n\t\t\t¼���%d�ڿ��Ͽ�ʱ��\n",i+1);
        printf ("\t\t\t�����뱾�γ̵�%d�ڿ������ڼ��Ͽ�(��������ڵ���1��С�ڵ���7������)\n",i+1);
        printf ("\t\t\t��:����һ�����롰1���������������롰7��\n\t\t\t������:");
        scanf ("%d",&j);
        printf ("\t\t\t\t\t¼�����ʱ��\n");
        printf ("\t\t\t��һ�ڿ�    ���:1   �Ͽ�ʱ�䣺8:00-8:45\n");
        printf ("\t\t\t�ڶ��ڿ�    ���:2   �Ͽ�ʱ�䣺8:50-9:35\n");
        printf ("\t\t\t�����ڿ�    ���:3   �Ͽ�ʱ�䣺10:05-10:50\n");
        printf ("\t\t\t���Ľڿ�    ���:4   �Ͽ�ʱ�䣺10:55-11:40\n");
        printf ("\t\t\t����ڿ�    ���:5   �Ͽ�ʱ�䣺12:30-13:15\n");
        printf ("\t\t\t�����ڿ�    ���:6   �Ͽ�ʱ�䣺13:20-14:05\n");
        printf ("\t\t\t���߽ڿ�    ���:7   �Ͽ�ʱ�䣺14:30-15:15\n");
        printf ("\t\t\t�ڰ˽ڿ�    ���:8   �Ͽ�ʱ�䣺15:20-16:05\n");
        printf ("\t\t\t�ھŽڿ�    ���:9   �Ͽ�ʱ�䣺16:35-17:20\n");
        printf ("\t\t\t��ʮ�ڿ�    ���:10  �Ͽ�ʱ�䣺17:25-18:10\n");
        printf ("\t\t\t��ʮһ�ڿ�  ���:11  �Ͽ�ʱ�䣺19:30-20:15\n");
        printf ("\t\t\t��ʮ���ڿ�  ���:12  �Ͽ�ʱ�䣺20:20-21:05\n");
        printf ("\t\t\t��ʮ���ڿ�  ���:13  �Ͽ�ʱ�䣺21:10-21:55\n");
        printf ("\t\t\t�����뵱���Ͽ�ʱ����:");
        scanf ("%d",&k);
        inf_course[num].time[k][j]=1;
    }
    inf_course[num].flag=1;
    printf ("\t\t\t\t\t¼�����\n");
    printf ("\t\t----------------------------------------------------------------\n");
    printf ("\t\t\t");
    system("pause");
    return 0;
}
