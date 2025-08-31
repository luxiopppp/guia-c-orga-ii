#include <stdio.h>
#include <stdint.h>

int main()
{
  uint32_t a = 0xAB71;
  uint32_t b = 0x2F8C8888;
  uint32_t mask = 0x7;

  printf("%x\n", a & mask);
  printf("%x\n", (b >> 29) & mask);
  printf("%d\n", (a & mask) == ((b >> 29) & mask));

  return 0;
}
