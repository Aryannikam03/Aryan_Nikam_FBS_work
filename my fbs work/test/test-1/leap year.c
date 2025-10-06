//2. WAP to check if the year is leap or not.
#include<stdio.h>
void main()
{
	int year=2007;
	if (year%4==0&&year%100!=0||year%400==0){
		printf("leap year");
	}
	else{
		printf("not leap year");
	}
}