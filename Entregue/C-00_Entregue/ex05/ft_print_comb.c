/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 21:23:44 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/07/18 21:34:25 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		hundred;
	int		dozen;
	int		unit;

	hundred = 0;
	while (hundred <= 7)
	{
		dozen = hundred + 1;
		while (dozen <= 8)
		{
			unit = dozen + 1;
			while (unit <= 9)
			{
				ft_putchar(hundred + '0');
				ft_putchar(dozen + '0');
				ft_putchar(unit + '0');
				if (hundred != 7)
					write(1, ", ", 2);
				unit++;
			}
			dozen++;
		}
		hundred++;
	}
}
