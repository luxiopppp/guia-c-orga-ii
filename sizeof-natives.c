#include <stdio.h>
int main()
{

  char c = 100;
  unsigned char uc = 255;
  short s = -8925;
  unsigned short us = 65535; 
  int i = 123456;
  unsigned u = 4294967295;
  long l = 1234567890;
  unsigned long ul = 1000000000000000000;

  printf("char(%lu): %d\n", sizeof(c), c);
  printf("uchar(%lu): %d\n", sizeof(uc), uc);
  printf("short(%lu): %d\n", sizeof(s), s);
  printf("ushort(%lu): %d\n", sizeof(us), us);
  printf("int(%lu): %d\n", sizeof(i), i);
  printf("unsigned(%lu): %d\n", sizeof(u), u);
  printf("long(%lu): %ld\n", sizeof(l), l);
  printf("ulong(%lu): %ld\n", sizeof(ul), ul);

  return 0;
}
