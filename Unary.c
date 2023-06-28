#include<stdio.h>

int main()
{
    //Implementation of Unary Operator in Arithmetic for Any given Number
    int number1;

    //putting value of Number1
    printf("Enter Any Value : ");
    scanf("%d",&number1);

    //Pre-Increment Operator
    ++number1;
    printf("The Pre-Increment value is %d",++number1);


    //Post-Increment Operator
    number1++;
    printf("The Post-Increment value is %d",number1++);


    //Pre-decrement Operator
    --number1;
    printf("The Pre-Decrement value is %d",--number1);


    //Post-Decrement Operator
    number1--;
    printf("The Post-Increment value is %d",number1--);

    return 0;
}