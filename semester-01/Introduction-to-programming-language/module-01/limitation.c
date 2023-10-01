#include <stdio.h>

int main()
{

    int a = 1000000000; // 10^9 , limit of int 
    printf("%d\n", a); 

    long long int b = 1000000000000000000; // 10^18 , limit of long long int
    printf("%lld\n", b); // %lld for long long int

    double c = 1001.5015804; // limit of float is 6-7 digits after decimal point
    printf("%.7lf\n", c); // %lf for double


    return 0;
}