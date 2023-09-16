#include <stdio.h>

/**
 * main - print 1 to 100 and fizzbuzz
 *
 * Return: 0
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++) // Corrected loop condition
    {
        if ((i % 3) == 0 && (i % 5) == 0) // Corrected the condition
        {
            printf("FizzBuzz ");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz ");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return (0);
}
