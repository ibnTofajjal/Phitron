#include <stdio.h>

int main  () {

    int tk;
    scanf("%d", &tk);

    if( tk >= 5000) {
        printf("Cox Bazar Jabo\n");

        if(tk >= 10000){
            printf("Saint Martin Jabo\n");
        } else {
            printf("Dhakay Fire Ashbo\n");
        }
    } else {
        printf("Kothao Jabo na\n");
    }

    return 0;
}