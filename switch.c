#include<stdio.h>
int main(){
    //switch = a more efficent alternaative to using many 'else if' statments 
    //         allows a value to be tested  for equally against many cases
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c",&grade);

    switch(grade){
        case 'A': 
        printf("perfect!\n");
        break;
        
        case 'B':
        printf("you did good!\n");
        break;

        case 'C':
        printf("you did good but should try well!\n");
        break;

        case 'D':
        printf("good,But try harder!");
        break;

        case 'F':
        printf("YOU FAILED!!!");
        break;   

        default:
        printf("Please enter only valid grades!!");
    }
    return 0;
}