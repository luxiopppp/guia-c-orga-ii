#include <stdio.h>

int global;


int main()
{
  int local;

  printf("global: %d\nlocal: %d", global, local);

  return 0;
}
