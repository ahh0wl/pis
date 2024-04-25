/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:43:44 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/15 21:30:00 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*void ft_printf(int nb)
  {
  printf("%i\n", nb);
  }

  int main(void)
  {
  int wr[3] = {1, 2, 3};
  ft_foreach(&wr[0], 3, &ft_printf);
  return 0;
  }*/
