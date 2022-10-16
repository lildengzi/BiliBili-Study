//Î´Íê³É

#if(0)
#include<cstdio>
int main()
{
	int n;
	struct
	{
		int num;
		char name[10];
		char sex;
		char job;
		union
		{
			int banji;
			char position[10];
		}category;
    }person[2];
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf("please input the num:");
		scanf("%d", &person->num);
		printf("please input the name:");
		scanf("%s"&person->name[10]);

	}
}
#endif