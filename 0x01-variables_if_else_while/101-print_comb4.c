#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point.
 * Return: 0 (Success)
 */

int main(void)

{
	int d, p, q;

	for (d = '0'; d < 'q'; d++)
	{
		for (p = d + 1; p <= 'q'; p++)
		{
			for (q = p + 1; q <= '9'; q++)
			{
				if ((p != d) != q)
				{
					putchar(d);
					putchar(p);
					putchar(q);
					if (d == '7' && p == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return: (0);
}
