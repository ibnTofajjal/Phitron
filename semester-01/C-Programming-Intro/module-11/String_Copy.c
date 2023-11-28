#include <stdio.h>
#include <string.h>

int main () {

    char a[100], b[100]; 
    scanf("%s %s", a,b); // & is not essential for string

    for (int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }

    printf("%s %s", a,b);
    

    return 0;
}

/*
    copy string without using for loop or manually 
    strcpy(a,b) // it's place the value of b to the a :D 
*/