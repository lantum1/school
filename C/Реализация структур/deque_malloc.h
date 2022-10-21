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
bool qdbl_push_front(queue_dbl *q, double el);
bool qdbl_push_back(queue_dbl *q, double el);
bool grow_buffer(queue_dbl *q);
void cut_buffer(queue_dbl *q);
double qdbl_pop_back(queue_dbl *q);
double qdbl_pop_front(queue_dbl *q);
double qdbl_peek_front(queue_dbl *q);
double qdbl_peek_back(queue_dbl *q);
bool qdbl_is_empty(queue_dbl *q);