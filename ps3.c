#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    printf("%d %d",a+b,c+d);
    printf("%0.1f %0.1f",c+d,d);
    return 0;
}