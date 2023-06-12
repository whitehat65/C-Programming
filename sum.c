#include<stdio.h>
int main()
{
    int n,sum=0;
    // printf("Enter a number which table you want\n");
    // scanf("%d",&n);
    //for actual view
    for(int i=5;i<=50;i++)
    {
        sum+=i;
    }
    printf("Sum of all numbers between 5 & 50 is %d :",sum);
    return 0;
}