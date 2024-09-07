#include<stdio.h>
int main(){
    //foramt specifer % = defines and formats a types of data to be displayed
    /*IMPORTANT:
    %c = character
    %s = string(array of character)
    %f = float
    %lf = double
    %d = int*/

    //%.1 = decimal precision
    //%1 = minimum field width
    //%- = left align
    
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("item 1: $%.2f\n",item1);//used to control the how many decimal points to show
    printf("item 1: $%8.2f\n",item2);//used to leave space on the left side 
    printf("item 1: $%-8.2f\n",item3);//used to align the texton the left side

    return 0;
}