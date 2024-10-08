#include<stdio.h>
int main(){
    float a,b,sum,diff,product,quotient;

    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter second number:");
    scanf("%f",&b);

    sum=a+b;
    diff=a-b;
    product=a*b;
    quotient=a/b;

    printf("Sum=%f\n",sum);
    printf("Diffrence=%f\n",diff);
    printf("Product=%f\n",product);
    printf("Quotient=%f\n",quotient);

    return 0;
}