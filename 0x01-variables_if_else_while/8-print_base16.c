#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	char base_num;

	for (base_num = 48; base_num <= 57; base_num++)
	{
		putchar(base_num);
	}

	for (base_num = 97; base_num <= 102; base_num++)
	{
		putchar(base_num);
	}
	putchar('\n');
	return (0);
}
