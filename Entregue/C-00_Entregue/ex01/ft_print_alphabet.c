/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 21:21:29 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/07/18 21:38:12 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	char	characters;

	characters = 'a';
	while (characters <= 'z')
	{
		write(1, &characters, 1);
		characters++;
	}
}
