#include <stdio.h>

void fun(int *p) {
    printf("Fun: Pointer P er value: %d\n", *p);
    printf("Fun: Pointer *P er address holo: %p\n", p);

    *p = 100; // dereference
    printf("Fun: Pointer P er value after mod: %d\n", *p);

}

int main() {
    
    int x=10; 
    printf("Main: X er address holo: %p\n", &x);
    
    fun(&x);
    printf("Main: Pointer X er value after mod: %d\n", x);

    return 0;
}