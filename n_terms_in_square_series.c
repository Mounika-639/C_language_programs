#include <stdio.h>

int main()
{
    int number, counter, square;

    printf("How many terms you want to print in the square series? ");
    scanf("%i", &number);
    counter = 1;
    printf("The first %i terms in the square series are ", number);

    square = counter * counter;
    while (square < (number * number))
    {
        printf("%i, ", square);
        counter = counter + 1;
        square = counter * counter;
    }
    printf("%i.\n", square);

    return 0;
}
