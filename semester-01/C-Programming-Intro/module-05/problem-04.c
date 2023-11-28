#include <stdio.h>

int main () {

    int X;
    scanf("%d", &X);

    // Check First Digit
    int getFirstDigit = X / 1000;

    // Check is Even or Odd
    if (getFirstDigit % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
   
    return 0;
}


/*
    *You you have 2 digit and want to remove last one then you can [divide it by 10.]
    *You you have 3 digit and want to remove last one then you can [divide it by 100.]
    *You you have 4 digit and want to remove last one then you can [divide it by 1000.]
    *You you have 5 digit and want to remove last one then you can [divide it by 10000.]
    
    So on...


    and that's the method we used in line number 9
*/