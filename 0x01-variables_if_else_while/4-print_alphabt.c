#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet_letter = 'a';

	for (; alphabet_letter <= 'z'; alphabet_letter++)
	{
		if (alphabet_letter == 'e' || alphabet_letter == 'q')
			continue;
		putchar(alphabet_letter);
	}
	putchar('\n');
	return (0);
}
