#ifndef DARRAY_H_
#define DARRAY_H_

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  size_t size;
  size_t capacity;
  int* arr;
} Darray_int;

Darray_int Darray_int_init(size_t capacity);
void Darray_int_destroy(Darray_int* darr);
void Darray_int_grow(Darray_int* darr);
int Darray_int_push(Darray_int* darr, int x);
void Darray_int_print(Darray_int* darr);

#endif // DARRAY_H_
