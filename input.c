#include<stdio.h>
int main(){
    char name[25];
    int age;

    printf("\nwhat's your name??\n");
    scanf("%s",&name); //but this only gets one word not the entire name or sentence
    //to get hat we use the function 'fgets'
    //fgets(name, 25, stdin);
    printf("hello, %s \n",name);
    printf("how old are you??");
    scanf("%d",&age);
    printf("you are %d years old",age);
    
    return 0;
}