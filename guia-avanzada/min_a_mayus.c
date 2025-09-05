#include <stdio.h>

void mayus(char *str) {
  while (*str != '\0') {
    if (*str >= 'a' && *str <= 'z') {
      *str = *str + 'A' - 'a';
    }
    str++;
  }
}

int main()
{
  char str[100];
  printf("Ingrese un string: ");
  scanf("%s", str);

  mayus(str);
  printf("Pasado por 'mayus': %s", str);

  return 0;
}
