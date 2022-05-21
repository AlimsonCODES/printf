#include "main.h"

/**
 * convert - converts number and base into string
 * @nums: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int nums, int base, int lowercase)
{
    static char *rep;
    static char buffer[50];
    char *ptr;

    rep = (lowercase)
? "0123456789abcdef"
: "0123456789ABCDEF";
    ptr = &buffer[49];
    *ptr = '\0';
    do
    {
        *--ptr = rep[nums % base];
        nums /= base;
    } while (nums != 0);

    return (ptr);
}
