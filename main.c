#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/darray.h"

int main(void) {
  Darray_int darr = Darray_int_init(5);
  Darray_int_print(&darr);
  Darray_int_push(&darr, 1);
  Darray_int_push(&darr, 1);
  Darray_int_push(&darr, 1);
  Darray_int_push(&darr, 1);
  Darray_int_push(&darr, 1);
  Darray_int_push(&darr, 1);
  Darray_int_push(&darr, 1);
  Darray_int_push(&darr, 1);
  Darray_int_push(&darr, 1);
  Darray_int_push(&darr, 1);
  Darray_int_push(&darr, 1);
  Darray_int_push(&darr, 1);
  Darray_int_push(&darr, 1);
  Darray_int_print(&darr);
  Darray_int_destroy(&darr);
  return 0;
}
