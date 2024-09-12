#include<stdio.h>
int main()
{
    int height;
    int i;
    int j;
    printf("Enter the height: ");
    scanf("%d",&height);
    for(i=0;i<height;i++)
    {
        for(j=0;j<height-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
