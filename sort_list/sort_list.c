#include "list.h"

void	ft_swap(t_list *a, t_list *b)
{
	int	temp;

	temp = a->data;
	a->data = b->data;
	b->data = temp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *ptr;
	int swapped;

	ptr = lst;
	swapped = 1;
	while (swapped == 1)
	{
		swapped = 0;
		while (ptr != 0 && ptr->next != 0)
		{
			if (cmp(ptr->data, ptr->next->data) == 0)
			{
				ft_swap(ptr, ptr->next);
				swapped = 1;
			}
			ptr = ptr->next;
		}
		ptr = lst;
	}
	return (lst);
}
