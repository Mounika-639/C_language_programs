#include <stdio.h>

int main()
{
    int table_number, counter, multiple;
 
    printf("Which multiplication table you want to print ? ");
    scanf("%i", &table_number);
    printf("The multiplication of %i is\n",table_number);
    counter = 1;
    while (counter != 11)
    {
        multiple = table_number * counter ;
        printf("%i X %i = %i\n", table_number, counter,multiple);
        counter = counter + 1;
    }
    
    return 0;
}
