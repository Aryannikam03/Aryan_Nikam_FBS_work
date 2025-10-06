//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.

void main()
{
	int s1=3,s2=5,s3=5;
	if(s1==s2 && s1==s3)
	{
		printf("triangle is equilateral");
	}
	else if (s1==s2||s1==s3||s2==s3)
	{
		printf ("traingle is isosceles");
	}
	else 
	{
		printf("traingle is scalene");
	}
}