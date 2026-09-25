#include <stdio.h>

int main()
{
    int number, counter, result, iterable ;
  
    printf("Up to which number you want to print x^x series ? ");
    scanf("%i,", &number);
    printf("The x^x series up to %i is 1", number);
    counter = 1;
    result = 1;
    iterable = 2;
    while (counter <= iterable)
    {
        result = result * iterable;
        counter = counter + 1;
    }
    while (result <= number)
    {
        printf(", %i", result);
        iterable = iterable + 1;
        counter = 1;
        result = 1;
        while (counter <= iterable)
        {
            result = result * iterable;
            counter = counter + 1;
        }
    }
    printf(".\n");

    return 0;
}
