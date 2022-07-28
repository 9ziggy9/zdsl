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

void Darray_int_destroy(Darray_int* darr) {
  free(darr->arr);
}

void Darray_int_print(Darray_int* darr) {
  printf("{");
  for (size_t i = 0; i < darr->size; i++) {
    printf("%d", darr->arr[i]);
    printf("%c", i < darr->size - 1 ? ',' : '\0');
  }
  printf("}\n");
}

int Darray_int_push(Darray_int* darr, int x) {
  if ((darr->size + 1) < darr->capacity) {
    darr->arr[darr->size] = x;
    darr->size++;
    return 0;
  }
  fprintf(stderr, "At capacity\n");
  return 1;
}

int main(void) {
  Darray_int darr = Darray_int_init(5);
  Darray_int_print(&darr);
  Darray_int_push(&darr, 1);
  Darray_int_print(&darr);
  Darray_int_destroy(&darr);
  return 0;
}
