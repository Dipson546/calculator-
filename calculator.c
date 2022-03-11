#include<stdio.h>

int main()
{
    char operator;
    double firstnumber,secondnumber;

    printf("enter the operator(+,-,*,/)");
    scanf("%c",&operator);


    printf("enter the two number");
    scanf("%lf %lf",&firstnumber,&secondnumber);

    switch (operator)
    {
    case '+':      

     printf("%2lf + %2lf = %2lf",firstnumber,secondnumber(firstnumber+secondnumber));
        break;

    case '-':
         printf("%2lf - %2lf = %2lf",firstnumber,secondnumber(firstnumber-secondnumber));
           break;

    case '*':
         printf("%2lf * %2lf = %2lf",firstnumber,secondnumber(firstnumber*secondnumber));
           break;

    case '/':
   if (second !=0.0)
  {
           printf("%2lf / %2lf = %2lf",firstnumber,secondnumber(firstnumber+secondnumber));
  
   }

    else{
    printf("divided by zero situation";
     } 
  `break;

 default:
    printf("%c is an invalid operator",operator);
        break;
    }
    return 0;
}




