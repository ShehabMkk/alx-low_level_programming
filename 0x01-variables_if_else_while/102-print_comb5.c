#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void) {
  int a, b, c;

  for (a = 0; a <= 9; a++) {
    for (b = 0; b <= 9; b++) {
      for (c = 0; c <= 9; c++) {
        if (a < b && b < c) {
          putchar(a + '0');
          putchar(b + '0');
          putchar(c + '0');
          if (a != 9 || b != 8 || c != 7) {
            putchar(',');
            putchar(' ');
          }
        }
      }
    }
  }

  putchar('\n');

  return 0;
}

