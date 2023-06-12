#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a 2 numbers:\n");
    scanf("%d %d",&a,&b);
    if (a < b) {
        printf("The smallest number is: %d\n", a);
    } else {
        printf("The smallest number is: %d\n", b);
    }
    return 0;
}