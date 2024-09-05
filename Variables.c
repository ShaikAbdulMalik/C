#include <stdio.h>

int main()
{
    //Variable = Allocated space in memory to store a value.
    //           We refer to a variable's name to access the stored value.
    //           That Variable now behaves as if it was the  value it contains.
    //           We need to always declare aa variale and then initialize it.
    
    int x;  //decalaration
    x = 123; // initialization
    int y = 321; //Both declaration and initializtion

    int age = 19; //This contains an integer
    float gpa = 2.05; //This conttain a decimal float
    char grade = 'C'; //This is used for a single character and should always be declared using single quotes
    char name[] = "Abdul Malik"; //This used instead of string since C language does not have oops concept therefore we use array
    
    printf("You are %d years old\n",age); //for integer types the format specifier is %d
    printf("Your current gpa is : %f\n",gpa); //for float the format specifer is %f
    printf("You have secured this grade :%c\n",grade);//for char the format specifier is %c
    printf("I am %s\n",name); //for char with array the format specifier is %s

    
    return 0;
}