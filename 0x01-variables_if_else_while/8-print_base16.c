#include <stdio.h>


int main(void)
{
	char x = '0';
	while (x <= 'f')
	{
		putchar(x++);
		if (x == ':')
			x = 'a';
	}

	putchar('\n');


	return (0);
}
