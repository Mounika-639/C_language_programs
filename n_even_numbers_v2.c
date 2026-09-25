#include <stdio.h>

int main()
{
    int number, counter;

    printf("How many even numbers you want to print? ");
    scanf("%i", &number);
    printf("The first %i even numbers are ", number);
    counter = 0;
    while (counter != number - 1)
    {
        printf("%i, ",2 * counter);
        counter = counter + 1;
    }
    printf("%i.\n", (2 * counter));
 
    return 0;
}
