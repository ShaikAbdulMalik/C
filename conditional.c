#include<stdio.h>
int main(){
    int age;

    printf("\nEnter your age: ");
    scanf("%d",&age);

    if(age >= 18){
        printf("You are eligible to apply!");
    }
    else if(age <= 0){
        printf("You are yet to be born");
    }
    else{
        printf("You are too young to apply");
    }
    return 0;
}