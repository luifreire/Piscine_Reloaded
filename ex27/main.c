/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:18:32 by luisanto          #+#    #+#             */
/*   Updated: 2023/07/20 13:36:52 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	c[0];

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (0);
		while (read(fd, c, 1))
			write(1, &c, 1);
	}
	return (0);
	close(fd);
}
