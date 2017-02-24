#include "push_swap.h"

void 	rra(t_d_linklst *list)
{
	t_node	*tmp;

	if (list->size > 1)
	{
		tmp = list->tail;
		list->tail = tmp->prev;
		tmp->next = list->head;
		tmp->prev = NULL;
		list->head = tmp;
		put("rra");
	}
}

void 	rrb(t_d_linklst *list)
{
	t_node	*tmp;

	if (list->size > 1)
	{
		tmp = list->tail;
		list->tail = tmp->prev;
		tmp->next = list->head;
		tmp->prev = NULL;
		list->head = tmp;
		put("rrb");
	}
}

void 	rrr(t_d_linklst *list_a, t_d_linklst *list_b)
{
	rra(list_a);
	rrb(list_b);
	put("rrr");
}