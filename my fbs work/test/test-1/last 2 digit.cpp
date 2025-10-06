//Print last 2 digit of number.
//Eg. i/p: 223410
//o/p: 10
#include<stdio.h>
int main()
{
    int no = 223410;
    int rem;

    rem = no % 100;   
    printf("%d", rem);
}