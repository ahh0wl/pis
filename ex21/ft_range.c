/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 04:39:42 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/17 16:02:14 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	if ((min >= max) || ((min < -1073741823) && (max > 1073741823)))
	{
		return (NULL);
	}
	size = max - min;
	arr = (int *) malloc((size) * sizeof(int));
	if (!arr)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
/*int	main()
  {
  int *p = ft_range(-1073741825, 1073741822);
  free(p);
  return 0;
  }*/
