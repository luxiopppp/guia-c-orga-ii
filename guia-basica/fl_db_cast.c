#include <stdio.h>

int main()
{
  const double d = 0.1;
  const float f = 0.1F;

  printf("double: %f\n", d);
  printf("float: %f\n", f);
  printf("double cast: %d\n", (int) d);
  printf("float cast: %d\n", (int) f);

  return 0;
}
