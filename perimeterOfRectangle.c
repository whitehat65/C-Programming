#include<stdio.h>
//Perimeter of Rectangle
int main()
{
    float length,breadth;
    printf("Enter length and breadth of rectangle : ");
    scanf("%f%f",&length,&breadth);
    printf("Perimeter of rectangle is : %.2f",(2*(length+breadth)));
    return 0;
}