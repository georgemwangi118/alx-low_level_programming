#include <stdio.h>
/**
 * main - contains the code for program execution
 *
 * Return: returns 0 (Success), otherwise non-zero
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
