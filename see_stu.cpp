#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include"function.h"
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
using namespace std;
void see_stu(linkStudent Stu)
{
    gotoxy(40,3);
    printf("��ѯѧ����Ϣ\n");
    printf ("\t\t----------------------------------------------------------------\n");
    if (Stu->next==NULL)
    {
        printf("\t\t\tδ¼��ѧ����Ϣ,�뷵��¼��\n");
        return;
    }
    linkStudent p,r;
    p=new Student;
    p=Stu->next;
    r=new Student;
    r=Stu;
    printf ("\t\t\t������ѧ��ѧ�Ų�ѯ:");
    char num[20];
    int flag=0,i,flag1=0;
    scanf("%s",num);
    if (strcmp(num,p->stu_num)==0)
    {
        flag=1;
    }
    while (strcmp(num,p->stu_num)!=0&&r->next!=NULL&&flag!=1)
    {
        if (p->next!=NULL)
        {
            p=p->next;
        }
        r=r->next;
        if (strcmp(num,p->stu_num)==0)
        {
            flag=1;
            break;
        }
    }
    while (flag==0)
    {
        printf("\t\t\t�޷���ѯ����ѧ��,(����1��������ѧ��ѧ��,����2������һ��):");
        scanf("%d",&flag1);
        if (flag1==2)
        {
            return;
        }
        for (i=0; num[i]!='\0'; i++)
        {
            num[i]='\0';
        }
        printf ("\t\t\t������ѧ��ѧ�Ų�ѯ\n");
        scanf("%s",num);
        p=new Student;
        p=Stu->next;
        r=new Student;
        r=Stu;
        if (strcmp(num,p->stu_num)==0)
        {
            flag=1;
        }
        while (strcmp(num,p->stu_num)!=0&&r->next!=NULL&&flag!=1)
        {
            if (p->next!=NULL)
            {
                p=p->next;
            }
            r=r->next;
            if (strcmp(num,p->stu_num)==0)
            {
                flag=1;
                break;
            }
        }
    }
    printf ("\t\t\tѧ������:%s\n",p->name);
    printf ("\t\t\tѧ���Ա�:%s\n",p->sex);
    printf ("\t\t\tѧ���ֻ���:%s\n",p->phone_num);
    printf ("\t\t\tѧ���꼶:%s\n",p->grade);
    printf ("\t\t\tѧ��רҵ:%s\n",p->major);
    printf ("\t\t\tѧ������:%d\n",p->age);
    printf ("\t\t\tѧ�������:%d\n",p->dor_num);
    printf ("\t\t\tѧ���༶���:%d\n",p->stu_class_num);
    printf ("\t\t\tѧ���༶��:%s\n",p->classnumber_char);
    printf ("\t\t\tѧ���༶����:%s\n",p->stu_class_name);
    printf ("\t\t\tѧ����ѡ�γ���:%d\n",p->choose_course_num);
    printf ("\t\t\tѧ������ѧ��:%d\n",p->credit);
    printf ("\t\t\t\tѧ��ѡ����Ϣ\n\n");
    for (i=0; i<p->choose_course_num; i++)
    {

        printf ("\t\t\t\t%d.%s\n",i+1,p->course[i].name);
        if (p->course[i].flag==1)
        {
            printf ("\t\t\t\t���Գɼ�:%.2f\n\t\t\t\tƽʱ�ɼ�:%.2f\n\t\t\t\t�ۺϳɼ�:%.2f\n\n",p->course[i].test_score,p->course[i].usual_score,p->course[i].result_score);
        }
        else
        {
            printf ("\t\t\t\t���γ���ʱδ¼��ɼ�\n");
        }
    }
    printf ("\t\t\t\t\tComplete\n");
    printf ("\t\t----------------------------------------------------------------\n");
    printf ("\t\t\t");
    system("pause");
};
