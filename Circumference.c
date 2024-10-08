#include <stdio.h>
#define PI 3.141
int main()  {
    float radius,cir;
    printf("enter the radius of the circle:");
    scanf("%f",&radius);

    cir= 2 * PI * radius;
    printf("the circumference of the circle is : %f ",cir);

        return 0;

}