#include<stdio.h>
#include<math.h>
int main(){
    double A;
    double B;
    double hypotenuse;
    printf("Enter the sides of the triangle : ");
    scanf("%lf %lf",&A,&B);
    hypotenuse = sqrt(A*A + B*B);
    printf("The Hypotenuse of the triangle is : %lf",hypotenuse);
    return 0;
}