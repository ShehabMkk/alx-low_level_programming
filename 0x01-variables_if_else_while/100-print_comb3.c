#include <stdio.h>

int main(void)
{
	for (int i='0';i <= '8';i++)
	{
		for(int j=i+1;j<='9';j++)
		{
			putchar(i);
			putchar(j);
			if (!(i=='8'&&j=='9'))

			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
