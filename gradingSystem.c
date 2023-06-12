#include<stdio.h>
//Grade the Student on their marks
int main()
{
    int marks;
    printf("Enter a mark: \n");
    scanf("%d",&marks);
    //using if else
    if(marks>=0 && marks<=100)
    {
        if(marks<30)
        {
            printf("Grade C");
        }
        else if(marks>=30 && marks<70)
        {
            printf("Grade B");
        }
        else if(marks>=70 && marks<90)
        {
            printf("Grade A");
        }
        else{
            printf("Grade A+");
        }
    } else{
        printf("Enter a valid marks");
    }

    // using ternary operator
    printf("%s", (marks >= 0 && marks <= 100) ? 
    ((marks < 30) ? "Grade C" : 
    (marks >= 30 && marks < 70) ? "Grade B" : 
    (marks >= 70 && marks < 90) ? "Grade A" : "Grade A+") : 
    "Enter a valid marks");

    return 0;
}