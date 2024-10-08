#include <stdio.h>
int main()
{
 float a,b,t;

printf("enter the first number;");
scanf("%f",&a);

printf("enter the second number:");
scanf("%f",&b);

t=a;
a=b;
b=t;

printf("After swapping,the first number = %f",a);
printf("\nAfter swapping,the second number=%f",b);

return 0;
}
