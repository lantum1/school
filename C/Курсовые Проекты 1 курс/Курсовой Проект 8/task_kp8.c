#include "task_kp8.h"

void func(list* l, int k)
{
	for (int i = 0; i < k; i++)
	{
		iter it = iter_go(l, list_size(l)-1);
		iter_remove(&it);
	}
}
