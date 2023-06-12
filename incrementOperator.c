#include<stdio.h>
int main()
{
    int i=1;
    //pre increment
    printf("%d \n",++i);
    printf("%d \n",i);
    
    //post increment
    printf("%d \n",i++);
    printf("%d \n",i);

    //pre decrement
    printf("%d \n",--i);
    printf("%d \n",i);
    
    //post decrement
    printf("%d \n",i--);
    printf("%d \n",i);
    return 0;
}