#include <stdio.h>

void fun(int x) {
    
    printf("Fun: %d\n", x);
    
    x=100;
    printf("Fun X Value Mod: %d\n", x);
    
}

int main() {
    
    int x=10; 
    printf("Main: %d\n", x);

    fun(x);
    return 0;
}