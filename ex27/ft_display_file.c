/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:31:35 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/17 18:21:02 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

/*int	ft_sizeof(char *str)
  {
  int	i;

  i = 0;
  while (str[i])
  i++;
  return (i);
  }*/

void	readfile(char *argv[])
{
	int		filede;
	char	buffer[2];
	ssize_t	reader;

	filede = open(argv[1], O_RDONLY);
	if (filede == -1)
	{
		write(1, "Cannot read file.\n", 18);
	}
	else
	{
		reader = read(filede, buffer, 1);
		buffer[1] = '\0';
		while (reader)
		{
			write(1, &buffer[0], 1);
			reader = read(filede, buffer, 1);
		}
		close(filede);
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
	}
	else if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
	}
	if (argc == 2)
	{
		readfile(argv);
	}
	return (0);
}
