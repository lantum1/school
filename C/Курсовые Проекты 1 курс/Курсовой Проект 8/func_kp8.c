#include <stdio.h>
#include <stdlib.h>
#include "func_kp8.h"

int barrier_el = 0;

void list_create(list *l)
{
	l->cap = 20;
	l->buf = malloc(l->cap * sizeof(list_el));
	l->buf[barrier_el].next_idx = barrier_el;
	for(int i = 1; i < l->cap - 1; i++)
	{
		l->buf[i].next_idx = i + 1;
	}
	l->first = 0;
	l->last = 0;
	l->buf[l->cap - 1].next_idx = barrier_el;
	l->top_empty_idx = 1;
	l->size = 0;
}

void list_destroy(list *l)
{
	free(l->buf);
	l->cap = 0;
	l->first = 0;
	l->last = 0;
	l->top_empty_idx = 1;
	l->size = 0;
}

bool list_is_empty(list* l)
{
	return l->size == 0;
}

unsigned int list_get(list* l, int i)
{
	int cur_idx = l->buf[barrier_el].next_idx;
	while (i > 0) 
	{
		cur_idx = l->buf[cur_idx].next_idx;
		i--;
	}
	return l->buf[cur_idx].val;
}

void list_print(list* l)
{
	for (iter it = iter_begin(l); !iter_equal(it, iter_end(l)); it = iter_next(it)) 
	{
		printf("%u ", iter_get_val(it));
	}
	printf("\n");
}

int list_size(list* l)
{
	return l->size;
}

unsigned int iter_get_val(iter it)
{
	return it.list->buf[it.prev].val;
}

void iter_set_val(iter* it, unsigned int val)
{
	it->list->buf[it->prev].val = val;
}

iter iter_next(iter it)
{
	return (iter){it.list, it.list->buf[it.prev].next_idx};
}

bool iter_equal(iter it1, iter it2)
{
	return it1.prev == it2.prev && it1.list == it2.list;
}

iter iter_go(list *l, int i) 
{
	if (l->size < i) 
	{
		fprintf(stderr, "Index out of bounds\n");
		return (iter){ l, -1 };
	}
	if (i < 0) 
	{
		fprintf(stderr, "Index out of bounds\n");
		return (iter){ l, -1 };
	}
	iter it = iter_end(l);
	if (l->first == 0)
	{
		l->first = 1;
	}
	while (i > 0) 
	{
		it = iter_next(it);
		i--;
	}
	return it;
}

iter iter_begin(list *l)
{
	return (iter){l, l->buf[barrier_el].next_idx};
}


iter iter_last_element(list *l)
{
	return (iter){l, l->last};
}

iter iter_end(list *l)
{
	return (iter){l, barrier_el};
}

void iter_insert_before(iter *it, unsigned int val)
{
	if (list_size(it->list) >= it->list->cap) 
	{
		int tmp = it->list->cap * 3 / 2;
		list_el* newd = realloc(it->list->buf, tmp * sizeof(list_el));
		it->list->buf = newd;
		it->list->top_empty_idx = it->list->cap;
		for (int i = it->list->cap; i < tmp - 1; i++) 
		{
			it->list->buf[i].next_idx = i + 1;
		}
		it->list->buf[tmp - 1].next_idx = barrier_el;
		it->list->cap = tmp;
	}
	it->list->size++;
	int ins = it->list->top_empty_idx;
	it->list->top_empty_idx = it->list->buf[ins].next_idx;
	it->list->buf[ins].val = val;
	if (iter_equal(*it, iter_end(it->list))) 
	{
		it->list->buf[ins].next_idx = it->list->buf[barrier_el].next_idx;
		it->list->buf[barrier_el].next_idx = ins;
		if (it->list->last == 0) 
		{
			it->list->last = it->list->first;
		}
		it->list->first = it->list->buf[barrier_el].next_idx;
	} 
	else 
	{
		it->list->buf[ins].next_idx = it->list->buf[it->prev].next_idx;
		it->list->buf[it->prev].next_idx = ins;
		if (it->list->buf[ins].next_idx == 0) 
		{
			it->list->last = ins;
		}
	}
}

void iter_remove(iter *it)
{
	if (!it->list->size) 
	{
		return;
	}
	it->list->size--;
	if (iter_equal(*it, iter_end(it->list))) 
	{
		int del = it->list->buf[barrier_el].next_idx;
		it->list->first = it->list->buf[del].next_idx;
		if (it->list->size == 0) 
		{
			it->list->last = 0;
		}
		it->list->buf[barrier_el].next_idx = it->list->buf[del].next_idx;
		it->list->buf[del].next_idx = it->list->top_empty_idx;
		it->list->top_empty_idx = del;
	} 
	else 
	{		
		int del = it->list->buf[it->prev].next_idx;
		if (it->list->size == 0)
		{
			it->list->last = 0;
			it->list->first = 0;
		}
		if (del == it->list->last) 
		{
			it->list->last = it->prev;
		}
		it->list->buf[it->prev].next_idx = it->list->buf[del].next_idx;
		it->list->buf[del].next_idx = it->list->top_empty_idx;
		it->list->top_empty_idx = del;
	}
}
