#include <stdbool.h>
#include <stddef.h>

typedef struct {
    size_t size;
    int *buf;
} vector_int;

bool vint_init(vector_int *v, size_t size);
void vint_destroy(vector_int *v);
size_t vint_get_size(vector_int *v);
bool vint_set_size(vector_int *v, size_t newsize);
double vint_get(vector_int *v, size_t i);
bool vint_set(vector_int *v, size_t i, int newval);
bool vint_push(vector_int *v, int newval);
void vin_pop(vector_int *v);