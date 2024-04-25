/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:01:37 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/15 16:11:15 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	char	*par;
	int		i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			par = argv[i];
			while (*par)
			{
				ft_putchar(*par);
				par++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
