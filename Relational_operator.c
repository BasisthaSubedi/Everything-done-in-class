#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    if(a>b){
        printf("a is greater than b");
    }else{
        printf("a is not greater than b\n");
    }
    if(a<b){
        printf("a is less than b\n");
    }else{
        printf("a is not less than b\n");
    }
    if(a<=b){
        printf("a is less than or equal to b\n");
    }else{
        printf("a is not less than or equal to b\n");
    }
    if(a>=b){
        printf("a is greater or equal to b\n");
    }else{
        printf("a is not greater or equal to b\n");
    }
    if(a==b){
        printf("a is equal to b\n");
    }else{
        printf("a is not equal to b\n");
    }
    if(a!=b){
        printf("a is not equal to b\n");
    }else{
        printf("a is equal to b\n");
    }

    return 0;
}
