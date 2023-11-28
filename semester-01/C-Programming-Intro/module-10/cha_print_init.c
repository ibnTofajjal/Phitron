#include <stdio.h>

int main () {

    // char arr[6] = {'J', 'o', 'y', 'n', 'a', 'l'} // There's no gurantee to to place a null after last index of the array
    char arr[7] = "Joynal"; // there's 100% gurantee to place a null \0 after the last index , just we need to declear a space for this.
    printf("%s", arr);
    return 0;
}