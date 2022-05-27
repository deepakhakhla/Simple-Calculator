#include<stdio.h>
#include<conio.h>
int main ()
{ printf("Simple Calculator, code by Deepak\n");
  
 float num1;
 float num2;
 char operator;
 float result;
 
   printf("Enter 1st number:\n");
   scanf("%f,&num1");

   printf("Enter operator:\n");
    scanf("%c,&operator");

   printf("Enter 2nd number:\n");
    scanf("%f,&num2");

 switch(operator)
 {  case'+': printf("%f\n,num1+num2");
             break;
    case'-': printf("%f\n,num1-num2");
             break;
    case'*': printf("%f\n,num1*num2");
             break;
    case'/': printf("%f\n,num1/num2");
             break;
    
    default:printf("It is not valid number");
     break; }  }