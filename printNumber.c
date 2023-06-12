#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the number upto you want:");
    scanf("%d",&n);
    //using while loop
    while(i<=n){
        printf("%d\n",i);
        i++;
    }

    //using for loop
    for(i;i<=n;i++)
    {
        printf("%d\n",i);
    }

    //using do-while loop
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
    
    return 0;
}