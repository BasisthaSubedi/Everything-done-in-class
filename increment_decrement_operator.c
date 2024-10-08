#include<stdio.h>
int main(){
    int a;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("initial value=%d\n",a);
    a++;
    printf("After increment:%d\n",a);
    a--;
    printf("After decrement:%d\n",a);

    return 0;
}