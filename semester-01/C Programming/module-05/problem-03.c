#include <stdio.h>

int main () {

    char a;
    scanf("%c", &a);

    if(a >= 97 && a <= 122) {
        int getCapital = a - 32; // we can use int or char
        printf("%c\n", getCapital);
    } else {
        int getSmall = a + 32; // we can use int or char
        printf("%c\n", getSmall);
    }

    return 0;
}



/*
  ASCII Table
    http://www.asciitable.com/  

    If we look into the ASCII table, we can see that the capital letters are
    between 65 and 90, and the small letters are between 97 and 122.

    for example: 'a' is 97, and 'A' is 65. Now if we want to check the difference between 'a' and 'A', we can do this: 'a' - 'A' or 97 - 65, which is 32. So if we want to convert 'a' to 'A', we can do this: 'a' - 32, which is 97 - 32, which is 65, which is 'A'.

    Now if we want to convert 'A' to 'a', we can do this: 'A' + 32, which is 65 + 32, which is 97, which is 'a'.


    TIPS: we can use 'a' insted of 97, and 'A' insted of 65, because 'a' and 'A' are char, and 97 and 65 are int. So we can use char or int, it's up to us.
*/