//Линейный однонаправленный список с барьерным элементом
#ifndef _FUNC_H
#define _FUNC_H

#include <stdbool.h>

typedef struct
{
	unsigned int val;
	int next_idx;
} list_el;

typedef struct
{
	list_el* buf;
	int cap;
	int top_empty_idx;
	int size;
	int first;
	int last;
} list;

typedef struct
{
	list *list;
	int prev;
} iter;

void list_create(list *l);
void list_destroy(list *l);
bool list_is_empty(list* l);
unsigned int list_get(list* l, int i);
void list_print(list* l);
int list_size(list* l);

unsigned int iter_get_val(iter it);
void iter_set_val(iter* it, unsigned int val);
iter iter_next(iter it);
iter iter_go(list *l, int i);
bool iter_equal(iter it1, iter it2);
iter iter_begin(list *l);
iter iter_last_element(list *l);
iter iter_end(list *l);
void iter_insert_before(iter *it, unsigned int val);
void iter_remove(iter *it);

#endif
