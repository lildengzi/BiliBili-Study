#if(0)
#include<cstdio>
#include<malloc.h>
#include<stdlib.h>

#define LEN sizeof(struct student)

struct student* creat();
void print(struct student* head);

struct student
{
	int num;
	float score;
	struct student* next;
};

int n;

int main()
{
	struct student* stu;

	stu = creat();
	print(stu);
	printf("\n\n");
	system("pause");
}

struct student* creat()
{
	struct student* head;
	struct student* p1,* p2;
	p1 = p2 = (struct student*)malloc(LEN);

	printf("Please enter the num:");
	scanf_s("%d", &p1->num);
	printf("Please enter the score:");
	scanf_s("%f", &p1->score);

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

void print(struct student *head)
{
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