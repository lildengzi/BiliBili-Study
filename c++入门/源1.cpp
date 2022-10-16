#include<cstdio>
#include<string.h>

struct student
{
	int num;
	char name[20];
	float score[3];
};

void print(struct student);
int main()
{
	struct srudent stu;
	stu.num = 8;
	strcpy(stu.name, "niubi");
	stu.score[0] = 98.5;
	stu.score[1] = 99.0;
	stu.score[2] = 99.5;

	print(stu);
}

void print(struct student stu)
{
	printf("num %d\n name %s\n score1 %5.2f\n score2 %5.2f\n score3 %5.2f\n", stu.num, stu.name, stu.score[0], stu.score[1], stu.score[2]);

}