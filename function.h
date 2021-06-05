#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

typedef struct locate_course
{
    int num;
    struct locate_course *next;
} locate_course,*linklocate_course;

typedef struct locate_class
{
    int num;
    struct locate_class *next;
} locate_class,*linklocate_class;

typedef struct inf_rebuilt
{
    char term[10][25];//����ѧ��
    float score[10]={0.0};//���޷���
}inf_rebuilt;

typedef struct Course
{
    int flag=0;
    int numbering=0;//�γ̱��
    int Stu_num=0;//�γ�ѧ������
    int instu=0;//�Ѿ�¼���ѧ������
    int section=0;//�Ͽδ���
    int time[14][8]={0};//�Ͽ�ʱ��
    int score;//�γ�ѧ��
    char name[40];//�γ�����
    char stu_name[1000][10];//ѧ������
    char stu_score[1000][10];//ѧ���ɼ�
    struct Class *next;
} Course,*linkCourse;

typedef struct Stu_course
{
    int course_num=0;//�γ̱��
//    int section={0};//�Ͽδ���
//    int time[14][8]={0};//�Ͽ�ʱ��
    char name[40];//�γ�����
    float test_score=0;//���Գɼ�
    float usual_score=0;//ƽʱ�ɼ�
    float result_score=0;//�ۺϳɼ�
    int credit=0;//ѧ��
    int flag=0;//�Ƿ���
//    char if_test[6];//�Ƿ���
    char rebuilt[6];//�Ƿ�����
    int rebuilt_num=0;//���޴���
    inf_rebuilt rebuit_inf;//���޾�����Ϣ
} Stu_course;

typedef struct Student
{
    int flag=0;//�ж��Ƿ����ļ������һ���ڵ�
    char stu_num[20];//ѧ��
    char name[10];//����
    char sex[10];//�Ա�
    char phone_num[20];//�ֻ���
    char grade[6];//�꼶
    char major[20];//רҵ
    int age=0;//����
    int dor_num=0;//�����
    int stu_class_num=0;//�༶���
    char classnumber_char[15];//�༶��
    char stu_class_name[40];//�༶����
    int classpoint=0;
    int coursepoint[50]={0};
    int credit=0;//����ѧ��
    int choose_course_num=0;//��ѡ�γ���(��ǰ������)
    Stu_course course[50];//��ѡ�γ̵ľ�����Ϣ
    struct Student *next;
} Student,*linkStudent;


typedef struct Class
{
    int flag=0;
    int numbing=0;//�༶���
    char class_num[15];//�༶��
    int stu_num=0;//ѧ������
    char class_name[40];//�༶����
    char grade[25];//�꼶

    int inpustu=0;//�Ѿ�¼���ѧ������
    char stu_name[50][20];//ѧ������

    int course_num=0;//��ѡ�γ���
    int course_people[100]={0};//�γ�����
    char course[100][20];//��ѡ�γ�
    float averscore[100]= {0.0}; //ƽ���ɼ�
    struct Class *next;
} Class,*linkClass;

struct Student *getfile_stu(linkStudent &L);
int getfile_class(Class L[],linklocate_class &S,int Max);
int getfile_course(Course L[],linklocate_course &S,int Max);

void welcome();
void gotoxy(int x,int y);
void print_head();

void menu(linkStudent inf_student,linkCourse inf_course,linkClass inf_class,linklocate_course lo_course,linklocate_class lo_class,int Max1,int Max2);

int login(char name[]);
void Register();
int if_loginuser(char username[],char password[]);
void get_password(char *pswd, int maxlen);



void input(linkStudent inf_student,Course inf_course[],Class inf_class[],
           linklocate_course lo_course,linklocate_class lo_class,int &Max1,int &Max2);
int input_class(Class L[],linklocate_class &lo_class,int Max,int flag);
int input_course(Course inf_course[],linklocate_course &lo_course,int Max,int flag);
void input_stu(linkStudent &inf_student,Course inf_course[],Class inf_class[],linklocate_course lo_course,linklocate_class lo_class);
void input_stu_score(linkStudent Stu,Course inf_course[],Class inf_class[]);
void input_stu_course(linkStudent &Stu,Course inf_course[],Class inf_class[],linklocate_course lo_course,linklocate_class lo_class);
void input_stu_self_course(linkStudent &Stu,Course inf_course[],Class inf_class[],linklocate_course lo_course,linklocate_class lo_class,char name[]);
void input_T(linkStudent inf_student,Course inf_course[],Class inf_class[],
           linklocate_course lo_course,linklocate_class lo_class,int &Max1,int &Max2);

void view(linkStudent inf_student,Course inf_course[],Class inf_class[],linklocate_course lo_course,linklocate_class lo_class);
void see_stu(linkStudent Stu);
void see_class(Class L[]);
void see_course(Course L[],linklocate_course lo_course);
void stu_see_self(linkStudent Stu,char name[]);
void see_all_stu(linkStudent Stu);
void see_stu_course(Course L[],linklocate_course lo_course);
void search_see_course(Course L[],linklocate_course lo_course);



void administrator(linkStudent inf_student,Course inf_course[],Class inf_class[],linklocate_course lo_course,linklocate_class lo_class,int Max1,int Max2);
void teacher(linkStudent inf_student,Course inf_course[],Class inf_class[],linklocate_course lo_course,linklocate_class lo_class,int Max1,int Max2);
void student(linkStudent inf_student,Course inf_course[],Class inf_class[],char name[],linklocate_course lo_course,linklocate_class lo_class);

struct locate_course *findlast_locourse(linklocate_course L);
struct locate_class *findlast_loclass(linklocate_class L);

int search_course(Course inf_course[],char c[],char re_course[][40],linklocate_course S,int temp[]);

void output_course(Course inf_course[],linklocate_course lo_course);
void output_class (Class inf_class[],linklocate_class lo_class);
void output_stu(linkStudent L);

void modify(linkStudent &inf_student,Course inf_course[],Class inf_class[],
           linklocate_course lo_course,linklocate_class lo_class,int &Max1,int &Max2);
void modify_stu(linkStudent &inf_student,Course inf_course[],Class inf_class[]);
void dele_stu(linkStudent &inf_student,Course inf_course[],Class inf_class[]);

//void modify_stu_self(linkStudent &inf_student,Course inf_course[],Class inf_class[],char name[]);

#endif // FUNCTION_H_INCLUDED
