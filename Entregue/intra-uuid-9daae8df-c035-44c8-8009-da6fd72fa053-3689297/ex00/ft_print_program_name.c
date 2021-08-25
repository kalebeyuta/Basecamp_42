/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_print_program_name.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 22:42:53 by julrodri          #+#    #+#             */
/*   Updated: 2021/07/30 20:49:09 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc >= 0)
		ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
