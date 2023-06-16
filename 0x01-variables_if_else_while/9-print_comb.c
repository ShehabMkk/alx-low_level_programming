#include <stdio.h>


int main(void)
{
	int x = '0';
	while (x <= '9')
	{
		putchar(x++);
		if (x != ':')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');


	return (0);
}
