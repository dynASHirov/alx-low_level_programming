#include <stdio.h>

int main()
{
  unsigned long int a = 0;
  unsigned long int b = 1;
  unsigned long int c;
  int x;
  for (x = 0; x <= 98; x++)
  {
    c = a + b;
    printf("%lu, ", c); 
    a = b;
    b = c;
  }
  printf("\n");
}
