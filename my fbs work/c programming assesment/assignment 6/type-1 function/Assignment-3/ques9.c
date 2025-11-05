#include<stdio.h>

void palindrome();

void main ()
{
	palindrome();
}

void palindrome()
{
	int n, temp, rev= 0, a;
	
	printf("Enter the Number: ");
	scanf("%d",&n);
	
	temp = n;
	
	while (temp > 0)
	{
		a = temp % 10;
		rev = rev * 10 + a;
		temp = temp / 10;
	}
	
	if (n==rev)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
}