#include<stdio.h>
int main(){

    const double PI = 3.1415;//'const' here is used to declare PI so that the user can't change value of PI. 
    double radius;
    double circumference;

    printf("\nEnter the radius of a circle:");
    scanf("%lf",&radius);
    circumference = 2 * PI * radius;
    printf("circumference: %lf",circumference);
    return 0;

}