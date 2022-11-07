#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet_letter;
	char upcase_alpha;

	for (alphabet_letter = 'a'; alphabet_letter <= 'z'; alphabet_letter++)
	{
		putchar(alphabet_letter);
	}
	for (upcase_alpha = 'A'; upcase_alpha <= 'Z'; upcase_alpha++)
	{
		putchar(upcase_alpha);
	}
	putchar('\n');
	return (0);
}
