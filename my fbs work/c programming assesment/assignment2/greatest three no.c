//Write a program to find greatest of three numbers using nested if-else.
#include<stdio.h>
void main()
{
	int a=4,b=6,c=9;
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greater");
		}
		else
		{
			printf("c is greater");
		}
		if (b>a)
		{
			if(b>c)
			{
				printf("b is greater");
			}
			else
			{
				printf("c is greater");
		}	}
	}
}