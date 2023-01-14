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
// 	swapped flag will keep loop running through list again and again till whole list is in order
	swapped = 1;
	while (swapped == 1)
	{
		swapped = 0;
		while (ptr != 0 && ptr->next != 0)
		{
//be careful wording is tricky of being zero if out of order 			
			if (cmp(ptr->data, ptr->next->data) == 0)
			{
				ft_swap(ptr, ptr->next);
				swapped = 1;
			}
			ptr = ptr->next;
		}
// so that goes back to beginning of list
		ptr = lst;
	}
	return (lst);
}
