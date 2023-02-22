#include <unistd.h>
/**
 * main - _putchar writes c to stdout
 * Return: 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
