#include <unistd.h>

/**
 * _putchar - prints the character
 *
 * @c: the character
 *
 * Return: On success 1.
 * on err, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
