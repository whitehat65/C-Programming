#include<stdio.h>
//can check student are pass or fail
int main()
{
    int marks;
    printf("Enter marks(0-100) : ");
    scanf("%d",&marks);
    //using if else
    if(marks>30){
        if(marks>100){
            printf("Enter a valid Marks!\n"); 
        }
        else{
            printf("Student are Pass\n");
        } 
    } 
    else{
        printf("Student are Fail\n");
    } 

    //using ternary operator
    // marks>30?printf("Student are Pass") :marks>100?printf("Enter a valid Marks!"):printf("Student are Fail");
    printf((marks>30)?((marks>100)?"Enter a Valid marks!\n":"Student are Pass\n"):"Student are Fail\n");
    return 0;
}