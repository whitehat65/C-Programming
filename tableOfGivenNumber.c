#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number which table you want\n");
    scanf("%d",&n);
    //for actual view
    for(int i=1;i<=10;i++)
    {
        printf("%d  *  %d = %d\n",n,i,n*i);
    }
    //for only table reverse 
    for(int i=10;i>=1;i--)
    {
        printf("%d\n",n*i);
    }
    return 0;
}