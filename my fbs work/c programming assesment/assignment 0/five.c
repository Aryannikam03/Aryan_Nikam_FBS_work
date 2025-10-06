#include <stdio.h>
int main()
{
	int a=20,b=40,c=10,d=19,e=30;
	int sum;
	sum =a+b+c+d+e;
	float average;
	average=sum/5;
	//printf("average of five :%d and %d=.2%f\n"a,b,c,d,e,sum,average);
	//printf("average of five :%d and %d=.2%f\n"a,b,c,d,e,sum,average);
	printf("Numbers: %d, %d, %d, %d, %d\n", a, b, c, d, e);
printf("Sum = %d\n", sum);
printf("Average = %.2f\n", average);
	return 0;
}