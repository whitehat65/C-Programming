#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a number \n");
        scanf("%d",&n);
        if(n%7==0)
            break;
    } while (1);
    printf("Thank you");
    return 0;
}