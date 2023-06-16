#include <stdio.h>


int main(void)
{
	char c = 'a';
	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
