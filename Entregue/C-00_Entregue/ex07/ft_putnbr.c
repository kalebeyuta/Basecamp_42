/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 21:24:34 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/07/22 17:25:46 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	number;

	number = nb;
	if (nb < 0)
	{
		ft_putchar('-');
	}
	if (nb / 10 > 0)
	{
		ft_putnbr(number / 10);
	}		
	ft_putchar(number % 10 + '0');
}
