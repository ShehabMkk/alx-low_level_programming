#include <stdio.h>

int main(void)
{
	for (int i='0';i <= '7';i++)
	{
		for(int j=i+1;j<='8';j++)
		{
			for(int k=j+1;k<='9';k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (!(i=='7'&&j=='8'&&k=='9'))

				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
