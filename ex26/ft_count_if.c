/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:30:52 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/15 23:10:07 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;

	count = 0;
	while (*tab != 0)
	{
		if (f(*tab))
			count++;
		tab++;
	}
	return (count);
}
/*int isc(char *arr)
  {
  if (*arr == 'c')
  return 1;
  return 0;
  }

  int main()
  {
  char *frase[] = {"ciao", "come", "va", NULL};
  char **p = &*frase;

  printf("%i", ft_count_if(p, &isc));
  return 0;
  }*/
