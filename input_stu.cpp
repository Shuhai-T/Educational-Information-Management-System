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

struct Student *findlast(linkStudent inf_student)
{
    linkStudent tail,head;
    tail=new Student;
    head=new Student;
    head=inf_student;
    tail=head;
    while (head->next!=NULL)
    {
        head=head->next;
        tail=head;
    }
    return tail;
};


void input_stu(linkStudent &inf_student,Course inf_course[],Class inf_class[],linklocate_course lo_course,linklocate_class lo_class)//��巨
{
    gotoxy(40,3);
    printf ("¼��ѧ��������Ϣ\n");
    printf ("\t\t----------------------------------------------------------------\n");
    linkStudent p,r,h,hr;
    int i=0,j,flag=0,x,y;
    int course_num=0;//��ѡ�γ���
    int coursenuming=0;//�γ̱��
    int cao;//��ʼ���ַ�����
    p=new Student;
    r=new Student;
    h=new Student;
    hr=new Student;
    hr=inf_student;
    if (inf_student->next!=NULL)
    {
        h=inf_student->next;
    }
    r=findlast(inf_student);
    p->next=NULL;

    printf ("\t\t\t������ѧ��:");
    scanf ("%s",p->stu_num);
    //����Ƿ��Ѿ������ѧ����Ϣ
    while (flag==0)
    {
        while(strcmp(h->stu_num,p->stu_num)!=0&&hr->next!=NULL)
        {
            if (h->next!=NULL)
            {
                h=h->next;
            }
            hr=hr->next;
        }
        if(strcmp(h->stu_num,p->stu_num)==0)
        {
            printf ("\t\t\t��ѧ����Ϣ��¼��(�����Ҫ¼������ͬѧ������1���˳���������������2):");
            scanf("%d",&x);
            if (x==1)
            {
                printf ("\t\t\t������ѧ��:");
                scanf ("%s",p->stu_num);
            }
            else if (x==2)
            {
                return;
            }
        }
        else
        {
            break;
        }
    }

    //����Ƿ��Ѿ������ѧ����Ϣ
    printf ("\t\t\t������ѧ������:");
    scanf ("%s",p->name);
    printf ("\t\t\t�������Ա�:");
    scanf ("%s",p->sex);
    printf ("\t\t\t�������ֻ���:");
    scanf ("%s",p->phone_num);
    printf ("\t\t\t�������꼶:");
    scanf ("%s",p->grade);
    printf ("\t\t\t������רҵ:");
    scanf ("%s",p->major);
    printf ("\t\t\t����������:");
    scanf ("%d",&p->age);
    printf ("\t\t\t�����������:");
    scanf ("%d",&p->dor_num);
    //
    printf ("\t\t\t�����������༶���:");
    scanf ("%d",&p->stu_class_num);
    //����Ƿ���ڴ˰༶
    while (inf_class[p->stu_class_num].flag!=1)
    {
        printf("\t\t\t�����ڴ˰༶������������\n");
        printf ("\t\t\t�����������༶���:");
        scanf ("%d",&p->stu_class_num);
    }
    //����Ƿ���ڴ˰༶
    printf ("\t\t\tѧ�����ڰ༶Ϊ:%s\n",inf_class[p->stu_class_num].class_name);
    strcpy(p->stu_class_name,inf_class[p->stu_class_num].class_name);
    strcpy(p->classnumber_char,inf_class[p->stu_class_num].class_num);
    printf ("\t\t\t����������ѧ��:");
    scanf ("%d",&p->credit);
     if (inf_class[p->stu_class_num].stu_num<=inf_class[p->stu_class_num].inpustu)
    {
        inf_class[p->stu_class_num].stu_num++;
    }
    strcpy(inf_class[p->stu_class_num].stu_name[inf_class[p->stu_class_num].inpustu],p->name);
    p->classpoint=inf_class[p->stu_class_num].inpustu;
    inf_class[p->stu_class_num].inpustu++;
    r->next=p;
    r=p;
    printf ("\t\t\t\t¼�����\n");
    printf ("\t\t----------------------------------------------------------------\n");
    printf ("\t\t");
    system("pause");
};
