#include<stdio.h>
//area of square
int main()
{
    float side;
    printf("Enter a size of side");
    scanf("%f",&side);
    float area = side*side;
    printf("Area of square is :%f",area);
    return 0;
}