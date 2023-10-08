#include <stdio.h>

int main () {

    char X;
    scanf("%c", &X);

    if(X >= 0 && X <= 57) {

        printf("IS DIGIT");

    } else {

        printf("ALPHA\n");
        if(X >= 'a' && X<= 'z') {
            printf("IS SMALL");
        } else {
            printf("IS CAPITAL");
        }
    }

    return 0;
}



