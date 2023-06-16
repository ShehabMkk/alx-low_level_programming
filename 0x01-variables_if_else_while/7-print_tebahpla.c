#include <stdio.h>


int main(void)
{
	char x = 'z';
	while (x >= 'a')
		putchar(x--);

	putchar('\n');


	return (0);
}
