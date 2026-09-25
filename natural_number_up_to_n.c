#include <stdio.h>
int main()
{
    int naturalnumber, count;
  
    printf("Up to which number you want to print natural number? ");
    scanf("%i", &naturalnumber);
    printf("The natural numbers up to %i are ", naturalnumber);
    count = 1;
    while (count < naturalnumber)
    {
         printf("%i, ",count);
         count = count + 1;
    }
    printf("%i.\n", naturalnumber);
 
    return 0;
}

