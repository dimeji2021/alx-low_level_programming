#include main.h
/**
 * print_line-  draws a diagonal line on the terminal..
 *
 *@n: is an integer that represen how long the line will be
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar ('\n');
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			putchar (' ');
		}
		putchar ('\\');
		putchar ('\n');
	}
	putchar ('\n');
}
