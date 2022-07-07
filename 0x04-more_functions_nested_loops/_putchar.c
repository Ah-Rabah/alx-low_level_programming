#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c:  The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropeiately.
 */
int _puchar(char c)
{
return (write(1, & c, 1));
}
