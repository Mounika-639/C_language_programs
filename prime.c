#include <stdio.h>

int main()
{
    int number, remainder, counter;
    
    printf("Enter a number to check whether it is a prime or not ? ");
    scanf("%i", &number);
    counter = 2;
    while (counter * counter <= number)
    {
        remainder = number % counter;
        counter = counter + 1;
        if(remainder == 0)
        {
            printf("%i is not a prime number.\n", number);
            return 0;
        }
    }
    printf("%i is a prime number.\n", number);
    return 0;
    if (number == 2)
    { 
        printf("%i is a prime number.\n", number);
        return 0;
    }
  
   return 0;
}
