/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 19:29:40 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/07/23 22:59:39 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char *c)
{
	write(1,&c, 1);
}
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int main(void)
{
	int a;
	a = 0;
	ft_ft(&a);
	ft_putchar(&a);
	return 0;
}