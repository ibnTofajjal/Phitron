#include <stdio.h>

int main () {
    char n;
    scanf("%c", &n);

    if(n >= 'a' && n < 'z'){
        char nextAlpha = n + 1;
        printf("%c", nextAlpha);
    } else if (n == 'z')
    {
        printf("a");
    }
    

    return 0;
}


// submitted : Done