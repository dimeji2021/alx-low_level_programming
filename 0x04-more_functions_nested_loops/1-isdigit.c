#include main.h
/**
 * _isupper-Shows 1 if the input is digit.
 * else shows 0.
 *@c: the charcter is ASCII code
 * Return: 1 for digit. 0 for the rest.
 */
int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
        {
                return (1);
        }
        else
        {
                return (0);
        }
        putchar('\n');
}
