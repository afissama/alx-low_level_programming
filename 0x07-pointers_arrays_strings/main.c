#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = _strspn("igeeks for geeks","gigggeek");
    printf("%u\n", n);
    return (0);
}
