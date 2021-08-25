/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:36:05 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/07/22 14:36:09 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int		operator;

	operator = *a;
	*a = *a / *b;
	*b = operator % *b;
}
