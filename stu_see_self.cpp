#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include"function.h"
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
using namespace std;
void stu_see_self(linkStudent Stu,char name[])
{
    gotoxy(40,3);
    printf ("�鿴������Ϣ\n");
    printf ("\t\t----------------------------------------------------------------\n");
    linkStudent p;
    p=new Student;
    p=Stu;
    while (strcmp(name,p->stu_num)!=0&&p->next!=NULL)
    {
        p=p->next;
    }

    printf ("\t\t\t����:%s\n",p->name);
    printf ("\t\t\t�Ա�:%s\n",p->sex);
    printf ("\t\t\t�ֻ���:%s\n",p->phone_num);
    printf ("\t\t\t�꼶:%s\n",p->grade);
    printf ("\t\t\tרҵ:%s\n",p->major);
    printf ("\t\t\t����:%d\n",p->age);
    printf ("\t\t\t�����:%d\n",p->dor_num);
    printf ("\t\t\t�༶���:%d\n",p->stu_class_num);
    printf ("\t\t\t�༶����:%s\n",p->stu_class_name);
    printf ("\t\t\t��ѡ�γ���:%d\n",p->choose_course_num);
    printf ("\t\t\t����ѧ��:%d\n\n",p->credit);
    int i;
    if (p->choose_course_num>0)
    {
        printf ("\t\t\t\t�γ̾�����Ϣ\n\n");
    }

    for (i=0; i<p->choose_course_num; i++)
    {
        printf ("\t\t\t%d.%s\n",i+1,p->course[i].name);
        if (p->course[i].flag==1)
        {
            if(strcmp(p->course[i].rebuilt,"��")==0)
            {
                printf ("\t\t\t�ÿγ���������\n");
            }
            printf ("\t\t\t���Գɼ�:%.2f\n\t\t\tƽʱ�ɼ�:%.2f\n\t\t\t�ۺϳɼ�:%.2f\n\n",p->course[i].test_score,p->course[i].usual_score,p->course[i].result_score);
        }
        else
        {
            printf ("\t\t\t���γ���ʱδ¼��ɼ�\n");
        }
    }
    printf ("\t\t\t\t\tComplete\n\n");
    printf ("\t\t----------------------------------------------------------------\n");
    printf ("\t\t\t");
    system("pause");
};
