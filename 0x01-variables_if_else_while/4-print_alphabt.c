#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet_letter;

	for (alphabet_letter = 'a'; alphabet_letter <= 'z'; alphabet_letter++)
	{
		if (alphabet_letter !== 'q' || alphabet_letter !== 'e')
			{ 
				putchar(alphabet_letter);
			}
	}
	putchar('\n');
	return (0);
}
