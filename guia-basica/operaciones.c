#include <stdio.h>

int main()
{
  int a, b, c, d;


  printf("a = %d, b = %d, c = %d, d = %d\n", a = 5, b = 3, c = 2, d = 1);
  printf("%d\n", a+b*c/d);
  printf("%d\n", a%b);
  printf("%d, %d\n", a==b, a!=b);
  printf("%x, %x\n", a&b, a|b);
  printf("%x\n", ~a);
  printf("%d, %d\n", a&&b, a||b);
  printf("%d\n", a<<1);
  printf("%d\n", a>>1);
  printf("%d, %d, %d, %d, %d\n", a+=b, a-=b, a*=b, a/=b, a%=b);

  return 0;
}
