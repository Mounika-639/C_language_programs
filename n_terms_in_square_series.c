#include <stdio.h>

int main()
{
    int number, counter, square;
   
    printf("How many terms in square series you want to print ? ");
    scanf("%i", &number);
    printf("The first %i terms in square series are 1", number);
    counter = 2;
    square = counter * counter ;
    while (square <(number * number))
    {
        printf(", %i", square);
        counter = counter + 1; 
        square = counter * counter ;
    }
    printf(",%i.\n", square);

    return 0;
}
