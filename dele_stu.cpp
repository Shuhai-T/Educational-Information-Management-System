#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include"function.h"
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
using namespace std;

void dele_stu(linkStudent &inf_student,Course inf_course[],Class inf_class[])
{
    gotoxy(40,3);
    printf("ɾ��ѧ����Ϣ\n");
    printf ("\t\t----------------------------------------------------------------\n");
    //�ҵ�ѧ��
    if (inf_student->next==NULL)
    {
        printf("\t\t\t\tδ¼��ѧ����Ϣ,�뷵��¼��\n");
        return;
    }
    printf ("\t\t\t����������Ҫɾ����ѧ����ѧ��:");
    int flag=0,i,flag1=0;
    linkStudent p,r,l;
    p=new Student;
    l=new Student;
    p=inf_student->next;
    r=new Student;
    l=inf_student;
    r=inf_student;
    char num[20];
    scanf("%s",num);
    if (strcmp(num,p->stu_num)==0)
    {
        flag=1;
    }
    while (strcmp(num,p->stu_num)!=0&&r->next!=NULL&&flag!=1)
    {
        if (p->next!=NULL)
        {
            l=p;
            p=p->next;
        }
        r=r->next;
        if (strcmp(num,p->stu_num)==0)
        {
            flag=1;
            break;
        }
    }
//    printf ("flag=%d\n",flag);
    while (flag==0)
    {
        printf("\t\t\t\t�޷���ѯ����ѧ��,(����1��������ѧ��ѧ��,����2������һ��):");
        scanf("%d",&flag1);
        if (flag1==2)
        {
            return;
        }
        printf ("\t\t\t����������Ҫɾ����ѧ��ѧ��:");
        for (i=0; num[i]!='\0'; i++)
        {
            num[i]='\0';
        }
        scanf("%s",num);
        p=new Student;
        p=inf_student->next;
        l=new Student;
        l=inf_student;
        r=new Student;
        r=inf_student;
        if (strcmp(num,p->stu_num)==0)
        {
            flag=1;
        }
        while (strcmp(num,p->stu_num)!=0&&r->next!=NULL&&flag!=1)
        {
            if (p->next!=NULL)
            {
                l=p;
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
    //�ҵ�ѧ��
    //���ѧ����Ϣ
    printf ("\t\t\tѧ��������Ϣ\n\n");
    printf ("\t\t\tѧ������:%s\n",p->name);
    printf ("\t\t\tѧ���Ա�:%s\n",p->sex);
    printf ("\t\t\tѧ���ֻ���:%s\n",p->phone_num);
    printf ("\t\t\tѧ���꼶:%s\n",p->grade);
    printf ("\t\t\tѧ��רҵ:%s\n",p->major);
    printf ("\t\t\tѧ������:%d\n",p->age);
    printf ("\t\t\tѧ�������:%d\n",p->dor_num);
    printf ("\t\t\tѧ���༶���:%d\n",p->stu_class_num);
    printf ("\t\t\tѧ���༶����:%s\n",p->stu_class_name);
    printf ("\t\t\tѧ���༶��:%s\n",p->classnumber_char);
    printf ("\t\t\tѧ����ѡ�γ���:%d\n",p->choose_course_num);
    printf ("\t\t\tѧ������ѧ��:%d\n\n\n",p->credit);
    printf ("\t\t\t\t\t�γ̾�����Ϣ\n\n");
    for (i=0; i<p->choose_course_num; i++)
    {
        printf ("\t\t\t%d.%s\n",i+1,p->course[i].name);
        printf ("\t\t\t���Գɼ�:%.2f\n\t\t\tƽʱ�ɼ�:%.2f\n\t\t\t�ۺϳɼ�:%.2f\n\n",p->course[i].test_score,p->course[i].usual_score,p->course[i].result_score);
    }
    //���ѧ����Ϣ
    //ѡ�����
    printf ("\t\t\t1.ɾ����ѧ����Ϣ\n");
    printf ("\t\t\t2.����������\n");
    printf ("\t\t\t��ѡ�����������Ĳ���:");
    int flag2=0,flag3=0;
    int x,y,z,m;
    scanf("%d",&flag2);
    switch(flag2)
    {
    case 1:
        for (x=0; x<p->choose_course_num; x++)
        {
            for (y=0; inf_course[p->course[x].course_num].stu_name[p->coursepoint[x]][y]!='\0'; y++)
            {
                inf_course[p->course[x].course_num].stu_name[p->coursepoint[x]][y]='\0';
            }
            for (y=p->coursepoint[x]; y<inf_course[p->course[x].course_num].instu; y++)
            {
                strcpy(inf_course[p->course[x].course_num].stu_name[y],inf_course[p->course[x].course_num].stu_name[y+1]);
                for (z=0; inf_course[p->course[x].course_num].stu_name[y+1][z]!='\0'; z++)
                {
                    inf_course[p->course[x].course_num].stu_name[y+1][z]='\0';
                }
            }
            for (y=p->coursepoint[x]; y<inf_course[p->course[x].course_num].instu; y++)
            {
                strcpy(inf_course[p->course[x].course_num].stu_score[y],inf_course[p->course[x].course_num].stu_score[y+1]);
                for (z=0; inf_course[p->course[x].course_num].stu_score[y+1][z]!='\0'; z++)
                {
                    inf_course[p->course[x].course_num].stu_score[y+1][z]='\0';
                }
            }
//            printf ("�γ�����:%d\n",inf_course[p->course[x].course_num].Stu_num);
            inf_course[p->course[x].course_num].instu--;
            inf_course[p->course[x].course_num].Stu_num--;
        }
        //
        for (x=0; inf_class[p->stu_class_num].stu_name[p->classpoint][x]!='\0'; x++)
        {
            inf_class[p->stu_class_num].stu_name[p->classpoint][x]='\0';
        }
        for (x=p->classpoint; x<inf_class[p->stu_class_num].inpustu; x++)
        {
            strcpy(inf_class[p->stu_class_num].stu_name[x],inf_class[p->stu_class_num].stu_name[x+1]);
            for (y=0; inf_class[p->stu_class_num].stu_name[x+1][y]!='\0'; y++)
            {
                inf_class[p->stu_class_num].stu_name[x+1][y]='\0';
            }
        }
        //ɾ���༶����
        for (x=0; x<p->choose_course_num; x++)
        {

            for (y=0; strcmp(p->course[x].name,inf_class[p->stu_class_num].course[y])!=0&&y<inf_class[p->stu_class_num].course_num; y++);
            if (inf_class[p->stu_class_num].course_people[y]<=1)
            {
                for (z=y; z<inf_class[p->stu_class_num].course_num; z++)
                {
                    inf_class[p->stu_class_num].course_people[z]=inf_class[p->stu_class_num].course_people[z+1];
                }
                for (z=0; inf_class[p->stu_class_num].course[y][z]!='\0'; z++)
                {
                    inf_class[p->stu_class_num].course[y][z]='\0';
                }
                for (z=y; z<inf_class[p->stu_class_num].course_num; z++)
                {
                    strcpy(inf_class[p->stu_class_num].course[z],inf_class[p->stu_class_num].course[z+1]);
                    for (m=0; inf_class[p->stu_class_num].course[z+1][m]!='\0'; m++)
                    {
                        inf_class[p->stu_class_num].course[z+1][m]='\0';
                    }
                }
                for (z=y; z<inf_class[p->stu_class_num].course_num; z++)
                {
                    inf_class[p->stu_class_num].averscore[z]=inf_class[p->stu_class_num].averscore[z+1];
                }
                inf_class[p->stu_class_num].course_num--;
            }
            else
            {
                inf_class[p->stu_class_num].course_people[y]--;
                inf_class[p->stu_class_num].averscore[y]=(inf_class[p->stu_class_num].averscore[y]*(inf_class[p->stu_class_num].course_people[y]+1)-p->course[x].result_score)/(inf_class[p->stu_class_num].course_people[y]*1.0);
            }
        }
        inf_class[p->stu_class_num].inpustu--;
        inf_class[p->stu_class_num].stu_num--;
        l->next=p->next;
        p->next=NULL;
        printf ("\n\t\t\t\t\tɾ���ɹ�\n");
        printf ("\t\t----------------------------------------------------------------\n");
        printf ("\t\t\t");
        system("pause");
        return;
    case 2:
        break;
    }
    system("cls");
    return;
};
