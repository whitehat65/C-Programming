#include<stdio.h>
//declaration/prototype
void printHello();
void printGoodBye();
int main()
{
    // int a,b;
    printHello();  // function call
    printGoodBye();
    return 0;
}

//definition of function
void printHello(){
    printf("Hello\n");
}

void printGoodBye()
{
    printf("Good Bye\n");
}
