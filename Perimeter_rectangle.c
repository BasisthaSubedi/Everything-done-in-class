#include <stdio.h>
int main()
 {
    float width,height,perimeter;

    printf("enter the width of the rectangle;");
    scanf("%f",&width);

    printf("enter the height of the rectangle");
    scanf("%f",&height);

    perimeter=2*(width+height) ;

    printf("the area of the rectangle is:%f",perimeter);

    return 0;
}