#include<stdio.h>
int main()
{
    int num1,num2,A ;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    //if(num1 < num2 )
   while(num2 != 0)

   {
       A = num2;
       num2 = num1%num2;
       num1 = A;
   }
   printf("greatest common divisor : %d",num1);
   return 0;
  
}
