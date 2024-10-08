#include<stdio.h>
int main (){
    int a,b,c;
        printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter the third number:\n");

    c=a;
    printf("c=a:c=%d\n",c);

    a+=b;
    printf("a+=b:a=%d",a);

    a-=b;
    printf("a-=b:a=%d\n",a);

    a*=b;
    printf("a*=b:a=%d\n",a);

    a/=b;
    printf("a/=b:a=%d\n",a);

    a%=b;
    printf("a modulus b:a=%d\n",a);

    return 0;

}