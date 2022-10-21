#include <stddef.h>
#include <stdbool.h>
#define POOL_SIZE 64
typedef struct{
    size_t size;
    size_t first;
    double buf[POOL_SIZE];
} queue_dbl;

void qdbl_init(queue_dbl *q);
void qdbl_destroy(queue_dbl *q);
bool qdbl_push_front(queue_dbl *q, double el);
bool qdbl_push_back(queue_dbl *q, double el);
double qdbl_pop_back(queue_dbl *q);
double qdbl_pop_front(queue_dbl *q);
double qdbl_peek_front(queue_dbl *q);
double qdbl_peek_back(queue_dbl *q);
bool qdbl_is_empty(queue_dbl *q);