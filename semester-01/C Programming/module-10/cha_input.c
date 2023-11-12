#include <stdio.h>

int main () {

    char arr[7]; // make sure to add extra one index for null - \0
    scanf("%s", &arr); // & is not essential for the array of string
    printf("%s", arr);

    return 0;
}