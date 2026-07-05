#include <stdio.h>

int main(void) 
{
    int i;
    int counter;
    counter = 0;

    for(i = 0; i < 1001; i++)
    {
        if(i%3==0 || i%5==0)
        {
            counter = counter + i;
        }
    }
    printf("%d\n", counter);
    return 0;
}
