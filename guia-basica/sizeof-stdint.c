#include <stdio.h>
#include <stdint.h>

int main()
{

  int8_t i8 = 100;
  uint8_t ui8 = 255;
  int16_t i16 = -8925;
  uint16_t ui16 = 65535; 
  int32_t i32 = 123456;
  uint32_t ui32 = 4294967295;
  int64_t i64 = 1234567890;
  uint64_t ui64 = 1000000000000000000;

  printf("int8(%lu): %d\n", sizeof(i8), i8);
  printf("uint8(%lu): %d\n", sizeof(ui8), ui8);
  printf("int16(%lu): %d\n", sizeof(i16), i16);
  printf("uint16(%lu): %d\n", sizeof(ui16), ui16);
  printf("int32(%lu): %d\n", sizeof(i32), i32);
  printf("uint32(%lu): %d\n", sizeof(ui32), ui32);
  printf("int64(%lu): %ld\n", sizeof(i64), i64);
  printf("uint64(%lu): %ld\n", sizeof(ui64), ui64);

  return 0;
}
