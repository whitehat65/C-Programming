#include<stdio.h>
int main()
{
    char n;
    printf("Enter a character:\n");
    scanf("%c",&n);
    if(n>='0' && n<='9')
    {
        printf("Number is digit");
    }
    else{
        printf("Number is not digit");
    }
    return 0;
}