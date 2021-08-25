/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 21:21:40 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/07/18 21:37:45 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void)
{
	char	characters;

	characters = 'z';
	while (characters >= 'a')
	{
		write(1, &characters, 1);
		characters--;
	}
}
