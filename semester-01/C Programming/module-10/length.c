#include <stdio.h>

int main () {

    char arr[100];
    scanf("%s", arr);

    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);
    

    return 0;
}

/*

Here's a easy way to get the string length with the help of strlen(arrName) built-in function

*/