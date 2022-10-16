// c++入门.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//结构体运用
#if(0)
#include <iostream>
#include<cstdio>
#include<cstring>

struct student
{
    int num;
    char name[20];
    float score[3];
};

void print(struct student*);

int main()
{
    struct student stu;

    stu.num = 8;
    strcpy_s(stu.name, "niubi");
    stu.score[0] = 98.0;
    stu.score[1] = 99.0;
    stu.score[2] = 95.5;

    print(&stu);
}

void print(struct student* p)
{
    printf("%d %s %5.2f %5.2f %5.2f", p->num, p->name, p->score[0], p->score[1], p->score[2]);
}
#endif
//结构体介绍
#if(0)
#include<cstdio>

struct student
{
	long num;
	float score;
	struct student* next;
};


void main()
{
	struct student a, b, c, * head;

	a.num = 10101;
	a.score = 89.5;
	b.num = 10103;
	b.score = 90;
	c.num = 10107;
	c.score = 88;

	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;

	for (; head != NULL;)
	{
		printf("%ld %5.1f\n", head->num, head->score);
		head = head->next;
	}
}
#endif

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
