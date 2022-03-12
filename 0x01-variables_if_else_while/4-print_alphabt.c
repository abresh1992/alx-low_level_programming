#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e')
			continue;
		else if (a == 'q')
			continue;

		putchar(a);
	}
	putchare('\n');

	return (0);
}
