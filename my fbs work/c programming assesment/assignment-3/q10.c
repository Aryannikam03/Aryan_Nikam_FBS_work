//Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)

void main ()
{
	int num = 12345;
	int temp = num;
	int last, first, sum;
	
	last = num % 10;
	
	while(temp >= 10)
	{
		temp = temp/10;
	}
	first = temp;
	
	sum = first + last;
	
	printf("Sum = %d (%d + %d)\n", sum, first, last);
	
}