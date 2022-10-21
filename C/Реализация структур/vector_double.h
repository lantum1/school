#include <stdbool.h>
#include <stddef.h>

typedef struct {
    size_t size;
    double *buf;
} vector_dbl;

bool vdbl_init(vector_dbl *v, size_t size);
void vdbl_destroy(vector_dbl *v);
size_t vdbl_get_size(vector_dbl *v);
bool vdbl_set_size(vector_dbl *v, size_t newsize);
double vdbl_get(vector_dbl *v, size_t i);
bool vdbl_set(vector_dbl *v, size_t i, double newval);
bool vdbl_push(vector_dbl *v, double newval);
void vdbl_pop(vector_dbl *v);