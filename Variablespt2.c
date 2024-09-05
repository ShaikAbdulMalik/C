#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';//single character
    char b[] = "Malik";//array of characters

    float c = 3.141592;// 4 bytes (32 bits of precision) 6 digits (%f)
    double d = 3.141592653589793;// 8 bytes (64 bits of precision) 15-16 digits (%lf) 

    bool e = true;//1 byte(true or false) %d

    char f = 100;//1 byte (-128 to +127) %d or %c
    unsigned char g = 255;//1 byte (0 to +255)%d or %c

    short int h = 32767; //2 byte (-32,786 to +32,786) %d
    unsigned short int i = 65535; //2 bytes(0 to +65,535) %d

    int j = 2134231314134;
    unsigned int k = 2132312323143;

    long long int l = 9223372036854775807;
    unsigned long long int m = 18446744073709551615;

    printf("%c\n",a); //char
    printf("%s\n",b); //char array
    printf("%f\n",c); //float
    printf("%d\n",d); //double
    printf("%d\n",e); //boolean
    printf("%d\n",f); //char as numeric value 
    printf("%d\n",g); //unsigned char as numeric value
    printf("%d\n",h); //short
    printf("%d\n",i); //unsigned short
    printf("%d\n",j); //int
    printf("%u\n",k); //unsigned int
    printf("%lld\n",l); //long long int
    printf("%llu\n",m); //unsigned long long int


return 0;
}