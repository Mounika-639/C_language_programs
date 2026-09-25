#include <stdio.h>

int main()
{
    int number, counter, square;

    printf("Up to which number you want to print square series ? ");
    scanf("%i", &number);
    printf("The square series up to %i is 1", number);
    counter = 2;
    square = counter * counter ;
    while (square < number)
    {
        printf(", %i", square);
        counter = counter + 1;
        square = counter * counter;
    }
    printf(".\n");
    
    return 0;
}
