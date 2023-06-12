#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i,j=n;i<=n && j>=1;i++,j--){
        sum+=i;
        printf("%d \n",i);
    }
    printf("Addition of number is : %d\n",sum);
    //reverse print
    // for(i=n;i>=1;i--){
    //     printf("%d ",i);
    // }
    return 0;
}