/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:47:05 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/16 21:12:50 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	alphabet;
	int		i;

	i = 97;
	while (i <= 122)
	{
		alphabet = i;
		ft_putchar(alphabet);
		i++;
	}
}
/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
