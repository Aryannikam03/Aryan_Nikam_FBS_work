//Find factorial of given number.
//Input: n = 5
//Output: 120


void main ()
{
	int n=5;
	int fact = 1, i = 1;
	
	while(i <= n)
	{
		fact *= i;
		i++;
	}
	printf("Factprial of %d is :%d",n,fact);
}