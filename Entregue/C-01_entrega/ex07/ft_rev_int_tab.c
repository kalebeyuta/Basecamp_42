/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:36:31 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/07/22 14:36:34 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int		ini;
	int		tam;
	int		swap;

	ini = 0;
	tam = size - 1 ;
	while (tam >= ini)
	{
		swap = tab[ini];
		tab[ini] = tab[tam];
		tab[tam] = swap;
		ini++;
		tam--;
	}
}
