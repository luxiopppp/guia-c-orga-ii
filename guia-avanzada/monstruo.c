#include <stdio.h>

typedef struct {
  char nombre[50];
  int vida;
  double ataque;
  double defensa;
} monstruo_t;


int main(void)
{
  monstruo_t monstruos[4] = {
    {"Juan", 20, 7.0, 10.0},
    {"Pedro", 7, 2.0, 1000.0},
    {"Jose", 18, 8.0, 9.0},
    {"Arnaldo", 1, 653.0, 1.0}
  };
  
  for (int i = 0; i < sizeof(monstruos) / sizeof(monstruo_t); i++) {
    printf("%s, %d, %f, %f\n", monstruos[i].nombre, 
                               monstruos[i].vida,
                               monstruos[i].ataque,
                               monstruos[i].defensa);
  }

  return 0;
}
