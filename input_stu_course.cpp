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
void input_stu_course(linkStudent &Stu,Course inf_course[],Class inf_class[],linklocate_course lo_course,linklocate_class lo_class)
{
    gotoxy(40,3);
    printf ("¼��ѧ��ѡ����Ϣ\n");
    printf ("\t\t----------------------------------------------------------------\n");
    if (Stu->next==NULL)
    {
        printf("\t\tδ¼��ѧ����Ϣ,�뷵��¼��\n");
        system("pause");
        return;
    }
    linkStudent p,r;
    p=new Student;
    p=Stu->next;
    r=new Student;
    r=Stu;
    printf ("\t\t\t������ѧ��ѧ��:");
    char num[20];
    int flag=0,i,j,k,x,y,z,flag1=0,io,cao;
    int choosenumber=0;//¼��γ���
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
        printf("\t\t\t�޷���ѯ����ѧ��,��ѡ��������Ĳ���\n\t\t\t����1��������ѧ��ѧ��\n\t\t\t����2�˳�¼��\n");
        printf("\t\t\t������:");
        scanf("%d",&flag1);
        if (flag1==2)
        {
            return;
        }
        for (i=0; num[i]!='\0'; i++)
        {
            num[i]='\0';
        }
        printf ("\t\t\t������ѧ��ѧ��:");
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
    printf ("\n\t\t\t\t��ѧ��������Ϣ\n");
    printf ("\t\t\t\tѧ������:%s\n",p->name);
    printf ("\t\t\t\tѧ���꼶:%s\n",p->grade);
    printf ("\t\t\t\tѧ��רҵ:%s\n",p->major);
    printf ("\t\t\t\tѧ���༶���:%d\n",p->stu_class_num);
    printf ("\t\t\t\tѧ���༶����:%s\n",p->stu_class_name);
    printf ("\t\t\t\tѧ����ѡ�γ���:%d\n",p->choose_course_num);
    printf ("\t\t\t\tѧ������ѧ��:%d\n",p->credit);
    printf ("\n\t\t\t�����뱾��¼��γ���(����0):");
    scanf("%d",&choosenumber);
    for (i=0; i<choosenumber; i++)
    {
        printf ("\t\t\t��ѡ���Ƿ��ѯ�γ�(����1��ѯ,����2ȡ����ѯ):");
        scanf("%d",&y);
        while (y==1)
        {
            search_see_course(inf_course,lo_course);
            printf ("\t\t\t��ѡ������Ƿ��ѯ�γ�(����1��ѯ,����2ȡ����ѯ):");
            scanf("%d",&y);
        }
        printf ("\t\t\t��������ѡ��%d���γ̱��:",i+1);
        scanf("%d",&x);
        while (inf_course[x].flag!=1)
        {
            printf ("\t\t\t�����ڸÿγ�,����������:");
            scanf("%d",&x);
        }
        printf ("\t\t\t\t�Ͽ�ʱ��\n");
        for (z=1; z<8; z++)
        {
            for (y=1; y<14; y++)
            {
                if (inf_course[x].time[y][z]==1)
                {
                    printf("\t\t\t");
                    printf ("����");
                    if (z==1)
                    {
                        printf ("һ");
                    }
                    else if (z==2)
                    {
                        printf ("��");
                    }
                    else if (z==3)
                    {
                        printf ("��");
                    }
                    else if (z==4)
                    {
                        printf ("��");
                    }
                    else if (z==5)
                    {
                        printf ("��");
                    }
                    else if (z==6)
                    {
                        printf ("��");
                    }
                    else if (z==7)
                    {
                        printf ("��");
                    }
                    printf ("   ��%d�ڿ�   ",y);
                    switch (y)
                    {
                    case 1:
                        printf ("�Ͽ�ʱ�䣺8:00-8:45\n");
                        break;
                    case 2:
                        printf ("�Ͽ�ʱ�䣺8:50-9:35\n");
                        break;
                    case 3:
                        printf ("�Ͽ�ʱ�䣺10:05-10:50\n");
                        break;
                    case 4:
                        printf ("�Ͽ�ʱ�䣺10:55-11:40\n");
                        break;
                    case 5:
                        printf ("�Ͽ�ʱ�䣺12:30-13:15\n");
                        break;
                    case 6:
                        printf ("�Ͽ�ʱ�䣺13:20-14:05\n");
                        break;
                    case 7:
                        printf ("�Ͽ�ʱ�䣺14:30-15:15\n");
                        break;
                    case 8:
                        printf ("�Ͽ�ʱ�䣺15:20-16:05\n");
                        break;
                    case 9:
                        printf ("�Ͽ�ʱ�䣺16:35-17:20\n");
                        break;
                    case 10:
                        printf ("�Ͽ�ʱ�䣺17:25-18:10\n");
                        break;
                    case 11:
                        printf ("�Ͽ�ʱ�䣺19:30-20:15\n");
                        break;
                    case 12:
                        printf ("�Ͽ�ʱ�䣺20:20-21:05\n");
                        break;
                    case 13:
                        printf ("�Ͽ�ʱ�䣺21:10-21:55\n");
                        break;
                    }
                }
            }
        }
        strcpy( p->course[p->choose_course_num+i].name,inf_course[x].name);
        p->course[p->choose_course_num+i].credit=inf_course[x].score;
        p->course[p->choose_course_num+i].course_num=x;
        printf("\t\t\t�����뱾�γ��Ƿ���������(�����ǻ��):");
        scanf("%s",p->course[p->choose_course_num+i].rebuilt);
        if(strcmp(p->course[p->choose_course_num+i].rebuilt,"��")==0)
        {
            printf("\t\t\t���������޴���:");
            scanf("%d",&p->course[p->choose_course_num+i].rebuilt_num);
        }
        //¼��༶�γ���
        io=0;
        for(j=0; j<inf_class[p->stu_class_num].course_num; j++)
        {
            if (strcmp(p->course[p->choose_course_num+i].name,inf_class[p->stu_class_num].course[j])==0)
            {
                io=1;
                break;
            }
        }
        for(cao=0; p->course[p->choose_course_num+i].name[cao]!='\0'&&io!=1; cao++)
        {
            inf_class[p->stu_class_num].course[j][cao]=p->course[p->choose_course_num+i].name[cao];
        }
        if (io==0)
        {
            inf_class[p->stu_class_num].course_num++;
        }
        inf_class[p->stu_class_num].course_people[j]++;
        //¼��γ�������ѧ������
        if (inf_course[x].Stu_num<=inf_course[x].instu)
        {
            inf_course[x].Stu_num++;
        }
        for (cao=0; p->name[cao]!='\0'; cao++)
        {
            inf_course[x].stu_name[inf_course[x].instu][cao]=p->name[cao];
        }
        p->coursepoint[p->choose_course_num+i]=inf_course[x].instu;
        inf_course[x].instu++;
    }
    p->choose_course_num=p->choose_course_num+choosenumber;
    printf ("\t\t\t\t¼�����\n");
    printf ("\t\t----------------------------------------------------------------\n");
    printf ("\t\t\t");
    system("pause");
};
