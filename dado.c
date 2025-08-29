#include <stdio.h>
#include <stdlib.h>

int main() {

  int dado[6] = {0};

  for (int i = 0; i < 60000000; i++) {
    int x = 7;
    while (x > 6) {
      x = 1 + rand()/((RAND_MAX + 1u)/6); 
    }
    dado[x-1]++;
  }

  printf("[%d, %d, %d, %d, %d, %d]\n", dado[0], dado[1], dado[2], dado[3], dado[4], dado[5]);

  return 0;
}
