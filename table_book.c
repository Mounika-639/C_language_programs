#include <stdio.h>

int main()
{
    int table_number1, table_number2, counter, multiple1, multiple2 ;
    
    printf("Table Book\n");
    table_number1 = 1;
    table_number2 = 2;
    while (table_number2 != 22)
    {
        printf("           %i and %i tables are\n\n", table_number1, table_number2);
        counter = 1;
        while (counter != 11)
        {
            multiple1 = table_number1 * counter ;
            multiple2 = table_number2 * counter ;
            printf("%i X %i = %i                ", table_number1, counter, multiple1);
            printf("%i X %i = %i\n", table_number2, counter, multiple2);
           
            counter = counter + 1;
        }
        printf("\n");
        table_number1 = table_number1 + 2;
        table_number2 = table_number2 + 2;
    }
    
    return 0;
}
