#include <stdio.h>
int main(){
    float radius, area;
    const float PI = 3.14159;
    printf("enter the radius of the circle:");
    scanf("%f" , &radius);
    area = PI * radius * radius ;
    printf("area of the circle is: %.2f\n" ,area);
    return 0 ;



}
