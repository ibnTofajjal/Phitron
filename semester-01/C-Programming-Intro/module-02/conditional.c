#include <stdio.h>


int main ()  {

    int tk;

    scanf("%d", &tk);
    if (tk > 100)
    {
        printf("You are rich\n");
    }
    else if (tk == 100)
    {
        printf("You are modarate\n");
    }
    else
    {
        printf("You are poor\n");
    }
    

    return 0;
}