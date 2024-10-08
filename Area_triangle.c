#include <stdio.h>
int main()
 {
    float base,height,area;

    printf("enter the base of the triangle;");
    scanf("%f",&base);

    printf("enter the height of the triangle");
    scanf("%f",&height);

    area=(base*height)/2 ;

    printf("the area of the triangle is:%f",area);

    return 0;
}