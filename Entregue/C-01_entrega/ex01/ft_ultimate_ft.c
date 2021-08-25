/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:08:17 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/07/23 23:03:22 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_ultimate_ft(int *nbr)
{
	*nbr = 42;
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

teste 
t e s t e \0 ¨&asdasnodnaod

int main(void)
{
	int a;
	a = 0; 
	ft_ultimate_ft(&a);
	ft_putchar((a / 10 + '0'));
	ft_putchar((a % 10 + '0'));
	return 0;
}