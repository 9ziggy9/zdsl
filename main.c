#include <stdio.h>
#include <stdlib.h>

typedef struct {
  size_t size;
  size_t capacity;
  int* arr;
} Darray_int;

Darray_int Darray_int_init(size_t capacity) {
  Darray_int darr;
  darr.size = 0;
  darr.capacity = capacity;
  darr.arr = (int*) malloc(sizeof(int) * capacity);
  return darr;
}

void Darray_int_print(Darray_int* darr) {
  printf("{");
  for (int i = 0; i < darr->size; i++) {
    printf("%d", i);
    printf("%c", i < darr->size - 1 ? ',' : '\0');
  }
  printf("}\n");
}

void Darray_int_destroy(Darray_int* darr) {
  free(darr);
}

int main(void) {
  printf("Hello, world\n");
  return 0;
}
