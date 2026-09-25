#include <stdio.h>

int main()
{
    int number, counter;

    printf("How many odd numbers you want to print ? ");
    scanf("%i", &number);
    printf("The first %i odd numbers are ", number);
    counter = 1;
    while (counter != (2 * number)-1)
    {
        printf("%i, ",counter);
        counter = counter + 2;
    }
    printf("%i.\n",counter);

    return 0;
}
