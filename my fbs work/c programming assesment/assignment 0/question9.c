#include <stdio.h>
int main()
{
    float base, height, area;
    base = 10;      
    height = 5;    

    area = 0.5 * base * height;  

    printf("Base: %.2f\n", base);
    printf("Height: %.2f\n", height);
    printf("Area of the triangle: %.2f\n", area);

    return 0;
}
