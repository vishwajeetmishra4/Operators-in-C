#include<stdio.h>

int main()
{
    //Implementation of Binary in Arithmetic operators for 2 Numbers
    int number1,number2,sum,sub,multi,mod;
    float div;

    //putting value of number1 & number2 
    printf("The Value of Number1 is :");
    scanf("%d",&number1);

    printf("The Value of Number2 is: ");
    scanf("%d",&number2);

    //Addition of 2 Numbers
    sum=number1+number2;
    printf("Addition of 2 given Numbers is %d\n",sum);

    //Subtraction of 2 Numbers
    sub=number1-number2;
    printf("Difference between 2 given Numbers is: %d\n",sub);

    //Multipliction of 2 Numbers
    multi=number1*number2;
    printf("Product of 2 given Numbers is : %d\n",multi);

    //Division(Quotient) of 2 Numbers
    div=number1/number2;
    printf("Quotient of 2 given numbers is : %f\n",div);

    //Modulo(Remainder) of 2 Numbers
    mod=number1/number2;
    printf("Remainder of 2 given numbers is :%d\n",mod);

    return 0;
}
