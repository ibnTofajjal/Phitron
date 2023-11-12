#include <stdio.h>

int main () {

    int A, B;
    scanf("%d %d", &A, &B);

    if( A % B == 0 || B % A == 0 ) {
        printf("Multiples\n");
    } else {
        printf("No Multiples\n");
    }

    return 0;
}


/*
    at line number 8: we check the remainder of A and B, if it's 0, then A is a multiple of B, and B is a multiple of A.
*/