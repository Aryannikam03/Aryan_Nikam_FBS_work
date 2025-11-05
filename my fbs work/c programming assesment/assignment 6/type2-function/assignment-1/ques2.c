#include<stdio.h>

int palindrome();

void main ()
{
	int result;
	result = palindrome();
	
	if(result == 0)
		printf("Number is palindrome");
	else
		printf("Number is not palindrome");
}
int pallindrome()
{
	int no,rev=0,temp,digit;
	
	printf("Enter Number: ");
	scanf("%d",&no);	
	
	temp = no;
	
	while (temp !=0 )
	{
		digit = temp % 10;
		rev = rev * 10 + digit;
		temp = temp / 10;
	}
	
	
	if(rev == no)
		return 0;
	else
		return 1;
}