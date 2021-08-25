/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 22:42:53 by julrodri          #+#    #+#             */
/*   Updated: 2021/07/30 18:27:06 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	n;
	int	r;

	n = 0;
	while (s1[n] == s2[n] && s1[n] != '\0')
		n++;
	r = (unsigned char)s1[n] - (unsigned char)s2[n];
	return (r);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*mem;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{	
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				mem = argv[i];
				argv[i] = argv[j];
				argv[j] = mem;
			}
			j++;
		}
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
