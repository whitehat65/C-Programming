#include<stdio.h>
//check number is even or odd
int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Number is Even");
    }
    else{
        printf("Number is odd");
    }
    return 0;
}