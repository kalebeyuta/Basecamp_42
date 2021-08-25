/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:36:39 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/07/22 14:36:41 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		ini;
	int		swap;

	while (size > 0)
	{
		ini = 0;
		while (ini < size - 1)
		{
			if (tab [ini] > tab[ini + 1])
			{
				swap = tab[ini + 1];
				tab[ini + 1 ] = tab[ini];
				tab[ini] = swap;
				ini++;
			}
			else
				ini++;
		}
		size--;
	}
}
