#include <stddef.h>
#include <stdbool.h>
typedef struct{
    size_t size;
    size_t first;
    size_t pool_size;
    double *buf;
} queue_dbl;

void qdbl_init(queue_dbl *q);
void qdbl_destroy(queue_dbl *q);
bool qdbl_push(queue_dbl *q, double el);
static bool grow_buffer(queue_dbl *q);
void cut_buffer(queue_dbl *q);
double qdbl_pop(queue_dbl *q);
double qdbl_peek(queue_dbl *q);
bool qdbl_is_empty(queue_dbl *q);