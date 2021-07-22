#include<stdio.h>

void main()
{
int num1,num2;
char i;
float op;

printf("Enter A for Addition, S for Subtraction, M for Multiplication and D for Division:");
scanf("%c",&i);
printf("Enter first number:");
scanf("%d",&num1);
printf("Enter second number:");
scanf("%d",&num2);

switch(i)
{
case 'A':
case 'a':
op=num1+num2;
printf("The sum is %5.2f.\n",op);
break; 
case 'S':
case 's':
op=num1-num2;
printf("The difference is %5.2f.\n",op);
break; 
case 'M':
case 'm':
op=num1*num2;
printf("The product is %5.2f.\n",op);
break; 
case 'D':
case 'd':
if (num2==0)
   { printf("Please enter a non zero value.\n");}
else     
   {op=num1/num2;
    printf("The quotient is %5.2f.\n",op);}
break; 
default:
printf("Please enter either A,S,M or D.\n");
break;
}
}
