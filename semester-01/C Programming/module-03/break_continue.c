#include <stdio.h>


int main  () {

    int i;
    for ( i = 0; i < 10; i++)
    {

        printf("%d\n", i);
        if(i == 5) 
        {
            break;
        }
    }

    for ( i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }

        printf("------------------ %d\n", i);
      
    }
    
    

    return 0;
}



/*
    break: 
        - break is used to terminate the loop
        - break is used to terminate the switch statement
        - break is used to exit from a loop
        - break is used to exit from a labeled statement

    continue:
        - continue is used to skip the current iteration of a loop
        - continue is used to skip the current iteration of a labeled statement    
*/