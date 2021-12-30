/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 20:21:45 by zsyyida           #+#    #+#             */
/*   Updated: 2021/07/07 10:26:41 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while (i != size/2)
	{
		temp = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i - 1] = temp;
	}
	i++;
}

int		main()
{
	int t[] = [1, 2, 3, 4];
	int *tab = &t;
	
	printf("%d", ft_rev_int_tab(&t, 4);
	return (0);
}
