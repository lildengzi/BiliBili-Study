#if(1)
//Ã¶¾Ù¸ÅÄî
#include<cstdio>

int main()
{
	enum weekday { mon, tue, wed, thu, fri, sat, sun };
	enum weekday a, b, c;
	//or:
	//enum weekday{ sun, mon, tue, wed, thu, fri, sat } a, b, c;
	//enum {sun, mon, tue, wed, thu, fri, sat } a, b, c;
	a = sun;
	b = mon;
	c = tue;

	printf("%d,%d,%d", a, b, c);
}
#endif