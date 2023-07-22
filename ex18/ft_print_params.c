/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:39:12 by luisanto          #+#    #+#             */
/*   Updated: 2023/07/20 11:17:54 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, const char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
			ft_putchar(*argv[i]++);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
