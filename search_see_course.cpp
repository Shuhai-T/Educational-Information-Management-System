#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include"function.h"
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
using namespace std;

void search_see_course(Course L[],linklocate_course lo_course)
{
    int i,num,j,k,flag=0,x,y,z=0;
    int t;
    printf ("\t\t\t�������ѯ�Ŀγ���:");
    char po[50],re_course[400][40];
    int ppp,hhh;
    int temp[100]= {0};
    scanf ("%s",po);
    hhh=search_course(L,po,re_course,lo_course,temp);
    while (hhh==0)
    {
        printf ("\t\t\t�޷���ѯ���ÿγ�\n");
        printf ("\t\t\t�����������ѯ:");
        for (i=0; po[i]!='\0'; i++)
        {
            po[i]='\0';
        }
        scanf("%s",po);
        hhh=search_course(L,po,re_course,lo_course,temp);
    }
    for (ppp=0; ppp<hhh; ppp++)
    {
        printf ("\t\t\t%s",re_course[ppp]);
        printf ("\t�γ̱��:%d\n\n",temp[ppp]);
    }
    printf ("\t\t\t��ѡ���Ƿ��ѯ�γ̾�����Ϣ(����1����������2ȡ��):");
    scanf ("%d",&z);
    if (z==2)
    {
        return ;
    }
    printf ("\n\t\t\t��������Ҫ��ѯ�Ŀγ̱��:");
    scanf ("%d",&num);
    printf ("\t\t\t�γ�����:%s\n",L[num].name);
    printf ("\t\t\t�γ�����:%d\n",L[num].Stu_num);
    printf ("\t\t\t�γ�ѧ��:%d\n",L[num].score);
    printf ("\t\t\t\t\t�α�\n");
    for (x=1,z=1; x<8; x++)
    {
        for (y=1; y<14; y++)
        {
            if (L[num].time[y][x]==1)
            {
                printf ("\t\t\t");
                printf ("����");
                if (x==1)
                {
                    printf ("һ");
                }
                else if (x==2)
                {
                    printf ("��");
                }
                else if (x==3)
                {
                    printf ("��");
                }
                else if (x==4)
                {
                    printf ("��");
                }
                else if (x==5)
                {
                    printf ("��");
                }
                else if (x==6)
                {
                    printf ("��");
                }
                else if (x==7)
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
    printf ("\t\t\t��ѡ���Ƿ�鿴�ÿγ�����ѧ����Ϣ,����1�鿴������2ȡ��:");
    scanf("%d",&t);
    if (t==2)
    {
        return;
    }
    else
    {
        if(L[num].instu>=1)
        {
            printf ("\t\t\t\tѧ����Ϣ\n");
        }else
        {
            printf ("\t\t\t\t��δ¼��ѧ����Ϣ\n");
        }

        for (i=0; i<L[num].instu&&L[num].stu_name[i][0]!='\0'; i++)
        {
            flag=0;
            printf ("\t\t\t\tѧ������:%s\n",L[num].stu_name[i]);
            printf ("\t\t\t\t�ɼ�:");
            for(j=0,k=0; j<3&&L[num].stu_score[i][k]!='\0'; k++)
            {
                printf ("%c",L[num].stu_score[i][k]);
                if (L[num].stu_score[i][k]=='.')
                {
                    flag=1;
                }
                if (flag==1)
                {
                    j++;
                }
            }
            printf("\n\n");
        }
    }

};
