#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint32_t fat32_t;

typedef enum e_type {
  TypeFAT32 = 0
} type_t;

typedef struct node {
  void* data;
  struct node* next;
} node_t;

typedef struct list {
  type_t type;
  uint8_t size;
  node_t* first;
} list_t;

fat32_t* new_fat32() {
  fat32_t* data_alloc = malloc(sizeof(fat32_t));
  if (data_alloc == NULL) return NULL;

  return data_alloc;
}

fat32_t* copy_fat32(fat32_t* data) {
  if (data == NULL) return NULL;

  fat32_t* ptr = malloc(sizeof(fat32_t));
  if (ptr == NULL) return NULL;

  *ptr = *data;
  return ptr;
}

void rm_fat32(fat32_t* data) {
  free(data);
}

list_t* listNew(type_t t) {
  list_t* l = malloc(sizeof(list_t));
  l -> type = t;
  l -> size = 0;
  l -> first = NULL;
  return l;
}

void listAddFirst(list_t* l, void* data) {
  node_t* n = malloc(sizeof(node_t));
  switch (l -> type) {
    case TypeFAT32:
      n -> data = (void*) copy_fat32((fat32_t*) data);
      break;
  }
  n -> next = l -> first;
  l -> first = n;
  l -> size++;
}

void* listGet(list_t* l, uint8_t i) {
  node_t* n = l -> first;
  for (uint8_t j = 0; j < i; j++) {
    n = n -> next;
  }
  return n -> data;
}

void* listRemove(list_t* l, uint8_t i) {
  node_t* tmp = NULL;
  void* data = NULL;
  if (i == 0) {
    data = l -> first -> data;
    tmp = l -> first;
    l -> first = l -> first -> next;
  } else {
    node_t* n = l -> first;
    for (uint8_t j = 0; j < i - 1; j++) {
      n = n -> next;
    }
    data = n -> next -> data;
    tmp = n -> next;
    n -> next = n -> next -> next;
  }
  free(tmp);
  l -> size--;
  return data;
}

void listDelete(list_t* l) {
  node_t* n = l -> first;
  while (n) {
    node_t* tmp = n;
    n = n -> next;
    switch (l -> type) {
      case TypeFAT32:
        rm_fat32((fat32_t*) tmp -> data);
        break;
    }
    free(tmp);
  }
  free(l);
}

void listModify(list_t* l, uint8_t i, uint8_t j) {
  if (i == j || l == NULL || l->first == NULL || l->first->next == NULL) {
    return;
  }
  
  if (i > j) { uint8_t tmp = i; i = j; j = tmp; }

  node_t* prevI = NULL;
  node_t* prevJ = NULL;
  node_t* nodeI = l->first;
  node_t* nodeJ = l->first;

  for (uint8_t k = 0; k < i; k++) {
    prevI = nodeI;
    nodeI = nodeI->next;
  }

  for (uint8_t k = 0; k < j; k++) {
    prevJ = nodeJ;
    nodeJ = nodeJ->next;
  }

  if (nodeI == NULL || nodeJ == NULL) return;
  
  if (prevI != NULL) prevI->next = nodeJ;
  else l->first = nodeJ;

  if (prevJ != NULL) prevJ->next = nodeI;

  node_t* tmp = nodeI->next;
  nodeI->next = nodeJ->next;
  nodeJ->next = tmp;
}

int main()
{
  list_t* l = listNew(TypeFAT32);
  fat32_t* f1 = new_fat32();
  fat32_t* f2 = new_fat32();
  fat32_t* f3 = new_fat32();
  listAddFirst(l, f1);
  listAddFirst(l, f2);
  listAddFirst(l, f3);
  listDelete(l);
  rm_fat32(f1);
  rm_fat32(f2);

  return 0;
}












