//write a program to find the area of circlr and circumference//
#include<stdio.h>

int main()
{
    int radius;
    float PI=3.14,area,ci;

    printf(" Enter the Radius of Circle: ");
    scanf("%d",&radius);

    area = PI * radius * radius;
    printf(" Area of a Circle  %f ",area);

    ci = 2 * PI * radius;
    printf("Circumference of a Circle is %f ",ci);

    
}
 
