#include <stdio.h>

int main () {

    int rahim = 10;
    float karim = 10.5;

    printf("%d\n", rahim);
    printf("%.2f\n", karim); // expected output: 10.500000 | if we handle the floating point value, we can use %.2f instead of %f

    return 0;
}


/*
    #Data Types
    - int > integer value
    - float > floating point value
    - char > character value (single character)
    - Bool > boolean value (true or false)
*/


/*
    #Format Specifiers
    - %d > integer value
    - %f > floating point value
    - %c > character value (single character)

    #Escape Sequences
    - \n > new line
    - \t > tab
    - \\ > backslash
    - \" > double quote
    - \' > single quote
*/