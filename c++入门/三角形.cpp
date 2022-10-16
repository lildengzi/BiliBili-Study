#if(0)
#include<cstdio>

void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y= temp;
}
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		if(a>c)
		{
		swap(a,c);
		}
		if(b>c)
		{
			swap(b ,c);
		}
		if (a>b)
		{
			swap(a, b);
		}
			
			if (a * a + b * b == c * c)
		{
			printf("Right triangle\n");
		}
		if (a * a + b * b > c * c)
		{
			printf("Acute triangle\n");
		}
		if (a * a + b * b < c * c)
		{
			printf("Obtuse triangle\n");
		}
		if (a == c || b == c || a == b)
		{
			printf("Isosceles triangle\n");
		}
		if (a == b&&b == c&&a==c)
		{
			printf("Equilateral triangle\n");
		}
	}
	else printf("Not triangle\n");
}
#endif