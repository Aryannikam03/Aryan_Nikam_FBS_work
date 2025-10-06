//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.

void main()
{
	int a=20;
	int b=30;
	char op='%';
	
	if (op=='+')
	{
		printf("%d",a+b);
	}
	else if (op=='-')
	{
		printf("%d",a-b);
	}
	else if (op=='*')
	{
		printf("%d",a*b);
	}
	else if (op=='/')
	{
		printf("%d",a/b);
	}
	else if (op=='%')
	{
		printf("%d",a%b);
	}
	else
	{
		printf("invalid choice");
	}
}