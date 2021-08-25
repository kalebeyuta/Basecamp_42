/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 21:24:06 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/07/22 21:23:18 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		char1;
	int		char2;

	char1 = 0 ;
	while (char1 <= 98)
	{
		char2 = char1 + 1;
		while (char2 <= 99)
		{
			ft_putchar(char1 / 10 + '0');
			ft_putchar(char1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(char2 / 10 + '0');
			ft_putchar(char2 % 10 + '0');
			if (char1 != 98 || char2 != 99 )
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			char2++;
		}
		char1++;
	}
}
int main (void)
{
	ft_print_comb2();
}