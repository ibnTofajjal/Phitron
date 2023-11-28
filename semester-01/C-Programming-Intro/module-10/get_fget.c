#include <stdio.h>
#include <string.h>
int main () {

    char arr[100];
    // gets(arr); // not recommended | use fgets instead of this, fgets syntax: fgets(arrName, sizeOfArry, stdin)
    fgets(arr, 30, stdin);
    arr[19] = '\0'; // if I want to getrid of those indexes what i don't want to print
    printf("%s", arr);

    return 0;
}