#if(1)
#include<cstdio>
#include<malloc.h>
#include<stdlib.h>
//
#define LEN sizeof(struct student)
//创建学生
struct student* creat();
//定义打印函数      head为局部头部指针
void print(struct student* head);
//定义结构体变量 学生
struct student
{
	//学号
	int num;
	//分数
	float score;
	//下一个学生变量地址
	struct student* next;
};
//表示学生存储个数
int n;

int main()
{
	//定义链表
	struct student* stu;
	//
	stu = creat();
	//打印链表
	print(stu);
	printf("\n\n");
	system("pause");
	return 0;
}

void insect()
{
	int 
	if()
	{
	
	}
}

struct student* creat()
{
	//定义   头部学生指针变量
	struct student* head;
	//
	struct student* p1,* p2;

	p1 = p2 = (struct student*)malloc(LEN);

	printf("Please enter the num:");
	scanf_s("%d", &p1->num);
	printf("Please enter the score:");
	scanf_s("%f", &p1->score);
	//
	head = NULL;
	n = 0;

	while(p1->num)
	{
		n++;
		if (1 == n)
		{
			head =p1;
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;
		p1 = (struct student*)malloc(LEN);

		printf("Please enter the num:");
		scanf_s("%d", &p1->num);
		printf("Please enter the score:");
		scanf_s("%f",&p1->score);
	}
	p2->next = NULL;

	return head;
}
                         //此处head为局部头部指针
void print(struct student *head)
{
	//
	struct student* p;
	printf("\nThere are %d record!\n\n", n);

	p = head;
	if (head)
	{
		do
		{
			printf("id:%d\nscore:%f\n", p->num, p->score);
			p = p->next;
		} while (p);
	}
}
#endif