#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct persona_s {
  char *nombre;
  uint16_t edad;
} persona_t;

persona_t *crearPersona(char* nombre, uint16_t edad) {
  persona_t *persona = malloc(sizeof(persona_t));
  if (persona == NULL) {
    return NULL;
  }
  persona -> nombre = nombre;
  persona -> edad = edad;

  return persona;
}

void eliminarPersona(persona_t *persona) {
  free(persona);
}

int main()
{
  persona_t *persona = crearPersona("Jose", 87);

  printf("Nombre: %s, Edad: %d", persona->nombre, persona->edad);
  eliminarPersona(persona);

  return 0;
}
