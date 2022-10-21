#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "func_kp8.h"
#include "task_kp8.h"

void help()
{
	printf("Choose command:\n");
	printf("1. Print list - 1\n");
	printf("2. Add element  - 2 <element> <index> (1-index)\n");
	printf("3. Delete element - 3 <index> (1-index)\n");
	printf("4. Print size of list - 4\n");
	printf("5. Make function - 5\n Exclude the last k elements from the list. Do not change the list if there are less than k elements in the list.\n");
	printf("6. Print help - help\n");
}

int main() 
{
	help();
	list l;
	list_create(&l);
	char *cmd = NULL, *var = NULL, *ind = NULL;
	char inp[100];
	for(;;) 
	{
		if (fgets(inp, 100, stdin) == NULL) 
		{
			break;
		}
		cmd = strtok(inp, " \t\n");
		var = strtok(NULL, " \t\n");
		ind = strtok(NULL, " \t\n");
		if (!strcmp(cmd, "1")) 
		{
			if (var != NULL) 
			{
				printf("Too much arguments\n");
			}
			else 
			{
				list_print(&l);
			}
		}
		else if (!strcmp(cmd, "2")) 
		{
			unsigned int v = atoi(var);
			int i = atoi(ind);
			if (var == NULL || ind == NULL) 
			{
				printf("Missed argument\n");
			}
			else if (v == 0 && strcmp(var, "0") != 0)
			{
				printf("Wrong value\n");
			}
			else if (i == 0 && strcmp(ind, "0") != 0)
			{
				printf("Wrong index\n");
			}
			else 
			{
				i--;
				iter it = iter_go(&l, i);
				if (it.prev != -1) 
				{
					iter_insert_before(&it, v);
				}
			}
		}
		else if (!strcmp(cmd, "3")) 
		{
			int i = atoi(var);
			if (var == NULL) 
			{
				printf("Missed argument\n");
			}
			else if (ind != NULL) 
			{
				printf("Too much arguments\n");
			}
			else if (i == 0 && strcmp(var, "0") != 0)
			{
				printf("Wrong index\n");
			}
			else 
			{
				i--;
				iter it = iter_go(&l, i);
				if (it.prev != -1) 
				{
					iter_remove(&it);
				}
			}
		}
		else if (!strcmp(cmd, "4")) 
		{
			if (var != NULL) 
			{
				printf("Too much arguments\n");
			}
			printf("%d\n", list_size(&l));
		}
		else if (!strcmp(cmd, "5")) 
		{
			int k = atoi(var);
			if (ind != NULL) 
			{
				printf("Too much arguments\n");
			}
			if (k == 0 && strcmp(var, "0") != 0)
			{
				printf("Wrong value\n");
			}
			if (k <= list_size(&l))
			{
				func(&l, k);
			}
		}
		else if (!strcmp(cmd, "help")) 
		{
			if (var != NULL) 
			{
				printf("Too much arguments\n");
			}
			help();
		}
		else 
		{
			printf("Unknown command\n");
		}
	}
	return 0;
}
