#include <stdio.h>

int main()
{
    int number, counter, result;

    printf("Enter a number to compute the power of itself: ");
    scanf("%i", &number);
    printf("%i to the power of %i is ", number, number);
    counter = 1;
    result = 1;
    while (counter <= number)
    {
        result = result * number;
        counter = counter + 1;
    }
    printf("%i.\n", result);

    return 0;
}
