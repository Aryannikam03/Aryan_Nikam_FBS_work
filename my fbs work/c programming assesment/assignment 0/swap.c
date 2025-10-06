#include <stdio.h>
int main()
   {
	int a=30,b=20,temp;
	printf("before swapping :a=%d,b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping :a=%d,b=%d\n",a,b);
	return 0;
	}