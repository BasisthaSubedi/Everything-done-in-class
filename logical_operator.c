#include<stdio.h>
int main(){
    int  a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

if(a>5&&b>15){
    printf("Both a ans b are greater than their respective values (5 and 15)\n");
}else{
    printf("At least one condition is false");
}
if(a>15 || b>15){
printf("At least one of a or b is greater than 15\n");
}else{
    printf("Neither a nor b is greater than 15\n");
}
if (!(a>15)){
    printf("a is not greater than 15\n");
}else{
    printf("a is greater than 15\n");
}
return 0;

}