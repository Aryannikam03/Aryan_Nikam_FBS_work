//Convert the time entered in hh,min and sec into total seconds.
#include<stdio.h>
void main()
{
	int hh=4;
	int min=22;
	int sec=10;
	
	int total;
	total=hh*60*60+60*min+sec;
	printf("the total time in sec is %d",total);
}