#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include"function.h"
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
using namespace std;
void see_all_stu(linkStudent Stu)
{
    gotoxy(37,3);
    printf("�鿴����ѧ������ѧ�ּ��������γ�\n");
    printf ("\t\t----------------------------------------------------------------\n");
    linkStudent p,h,r;
    p=new Student;
    h=new Student;
    r=new Student;
    h=Stu;
    p=h;
    p=h->next;
    int i=1,j,x;
    int num=0;//��¼������γ���
    r=h;
    while (r->next!=NULL)
    {
        num=0;
        printf ("\t\t\t%d.����:%s\n",i++,p->name);
        printf ("\t\t\tѧ��:%s\n",p->stu_num);
        printf ("\t\t\t����ѧ��:%d\n\n",p->credit);
        for (j=0;j<p->choose_course_num;j++)
        {
            if (p->course[j].result_score<60.0)
            {
                num++;
            }
        }
        if (num>0)
        {
            printf ("\t\t\t������γ���:%d\n",num);
            for (j=0,x=0;j<p->choose_course_num;j++)
            {
                if (p->course[j].result_score<60.0)
                {
                    printf ("\t\t\t(%d)%s\n",x+1,p->course[j].name);
                    x++;
                }

            }
            printf ("\n\n");
        }else
        {
            printf ("\t\t\t��ѧ���޲�����γ���\n\n");
        }
        if (p->next!=NULL)
        {
            p=p->next;
        }
        r=r->next;
    }
    printf ("\t\t\t\t\tComplete\n");
    printf ("\t\t----------------------------------------------------------------\n");
    printf ("\t\t\t");
    system("pause");
    return;
};
