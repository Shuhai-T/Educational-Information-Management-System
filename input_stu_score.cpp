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

void input_stu_score(linkStudent Stu,Course inf_course[],Class inf_class[])
{
    linkStudent p;
    p=new Student;
    int i,n,j;
    int checknum=0;
    char num[20];
    int cnum,flag=0;
    gotoxy(40,3);
    printf ("¼��ѧ���γ̳ɼ�\n");
    printf ("\t\t----------------------------------------------------------------\n");
    printf ("\t\t\t������ѧ��ѧ��:");
    scanf("%s",num);
    p=Stu->next;
    if (strcmp(num,p->stu_num)==0)
    {
        checknum=1;
    }
    flag=0;
    if (p->next==NULL)
    {
        flag=1;
    }
    while (checknum!=1)
    {
        if (flag==1)
        {
            break;
        }
        p=p->next;
        if (p->next==NULL)
        {
            flag=1;
        }
        if(strcmp(num,p->stu_num)==0)
        {
            checknum=1;
            break;
        }
    }
    while (checknum!=1)
    {
        p=new Student;
        p=Stu->next;
        printf("\t\t\t�޷���ѯ����ѧ��,����������ѧ��:");
        for (i=0; num[i]!='\0'; i++)
        {
            num[i]='\0';
        }
        scanf("%s",num);
        if (strcmp(num,p->stu_num)==0)
        {
            checknum=1;
            break;
        }
        flag=0;
        if (p->next==NULL)
        {
            flag=1;
        }
        while (checknum!=1)
        {
            if (flag==1)
            {
                break;
            }
            p=p->next;
            if (p->next==NULL)
            {
                flag=1;
            }
            if(strcmp(num,p->stu_num)==0)
            {
                checknum=1;
                break;
            }
        }
    }
    printf("\t\t\tѧ������:%s �༶:%s ����ѧ��:%d\n",p->name,p->stu_class_name,p->credit);
    printf ("\t\t\tѧ����ѡ�γ���:%d\n\n",p->choose_course_num);
    n=p->choose_course_num;
    for (i=0; i<n; i++)
    {
        printf ("\t\t\t�γ̱��:%d\n",p->course[i].course_num);
        printf ("\t\t\t�γ�����:%s\n",p->course[i].name);
        printf ("\t\t\t�γ�ѧ��:%d\n",p->course[i].credit);
        if (strcmp(p->course[i].rebuilt,"��")==0)
        {
            printf("\t\t\t�ÿγ̲���������\n\n");
        }
        else
        {
            printf ("\t\t\t�ÿγ���������\n");
            printf ("\t\t\t���޴���:%d\n\n",p->course[i].rebuilt_num);
        }
    }
    printf ("\t\t\t����������Ҫ¼��Ŀγ̳ɼ��Ŀγ̱��:");
    scanf("%d",&cnum);
    for (i=0; i<n; i++)
    {
        if (p->course[i].course_num==cnum)
        {
            break;
        }
    }
    printf ("\t\t\t�˿γ�����:%s\n",p->course[i].name);
    printf ("\t\t\t�γ�ѧ��:%d\n",p->course[i].credit);
    if (strcmp(p->course[i].rebuilt,"��")==0)
    {
        printf("\t\t\t�ÿγ̲���������\n");
    }
    else
    {
        printf ("\t\t\t�ÿγ���������\n");
        printf ("\t\t\t���޴���:%d\n",p->course[i].rebuilt_num);
        if (p->course[i].rebuilt_num>1)
        {
            printf ("\t\t\t\t¼�뱾������ǰ������Ϣ\n");
            for (j=0; j<p->course[i].rebuilt_num-1; j++)
            {
                printf ("\t\t\t�������%d������ѧ��(�������롰��һ��)��",j+1);
                scanf("%s",p->course[i].rebuit_inf.term[j]);
                printf ("\t\t\t���������޳ɼ�:");
                scanf("%f",&p->course[i].rebuit_inf.score[j]);
            }
        }
        printf ("\t\t\t\t¼�뱾��������Ϣ\n");

    }
    printf ("\t\t\t��ʾ:ƽʱ�ɼ��Ϳ��Գɼ���ռ�ܳɼ�һ��(�����޼�ʹ�������ճɼ�Ҳֻ��60��)\n");
    printf ("\t\t\t������ѧ��ƽʱ�ɼ�:");
    scanf ("%f",&p->course[i].usual_score);
    printf ("\t\t\t������ѧ�����Գɼ�:");
    scanf ("%f",&p->course[i].test_score);
    p->course[i].result_score=p->course[i].usual_score/2.0+p->course[i].test_score/2.0;
    if (strcmp(p->course[i].rebuilt,"��")==0&&p->course[i].result_score>=60.00)
    {
        printf("\t\t\tѧ�����ճɼ�Ϊ:60.00\n");
        p->course[i].result_score=60.00;
    }
    else if (strcmp(p->course[i].rebuilt,"��")==0)
    {
        printf ("\t\t\tѧ�����ճɼ�Ϊ%.2f\n",p->course[i].result_score);
    }
    if (p->course[i].result_score>=60.00)
    {
        p->credit=p->credit+p->course[i].credit;
    }
    if (p->course[i].rebuilt_num>0)
    {
        j=p->course[i].rebuilt_num-1;
        strcpy(p->course[i].rebuit_inf.term[j],p->grade);
        p->course[i].rebuit_inf.score[j]=p->course[i].result_score;
    }

    //¼��γ̳ɼ�
    int t;
    j=0;
    t=p->course[i].course_num;
    while(strcmp(inf_course[t].stu_name[j],p->name)!=0)
    {
        j++;
    }
    char score[10];
    sprintf(score,"%.2f",p->course[i].result_score);
    int cao=0;
    for (cao=0; score[cao]!='\0'&&cao<10; cao++)
    {
        inf_course[t].stu_score[j][cao]=score[cao];
    }
    //¼��༶�ɼ�
    int banjinum=p->stu_class_num;
    for (j=0; j<inf_class[banjinum].course_num; j++)
    {
        if(strcmp(inf_class[banjinum].course[j],p->course[i].name)==0)
        {
            break;
        }
    }
    inf_class[banjinum].averscore[j]=p->course[i].result_score+inf_class[banjinum].averscore[j]*(inf_class[banjinum].inpustu-1);
    inf_class[banjinum].averscore[j]=inf_class[banjinum].averscore[j]/(inf_class[banjinum].inpustu*1.0);
    p->course[i].flag=1;
    printf ("\t\t\t\t¼�����\n");
    printf ("\t\t----------------------------------------------------------------\n");
    printf ("\t\t\t");
    system("pause");
    return;
};
