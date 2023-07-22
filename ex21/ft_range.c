/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:52:44 by luisanto          #+#    #+#             */
/*   Updated: 2023/07/19 15:38:06 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*product;
	int	i;

	if (min >= max)
		return (NULL);
	product = (int *)malloc(sizeof(*product) * (max - min));
	i = 0;
	while (min < max)
	{
		product[i] = min;
		i++;
		min++;
	}
	return (product);
}
