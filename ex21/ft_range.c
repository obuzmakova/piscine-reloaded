/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:31:33 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/08 12:59:10 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *num;

	i = 0;
	if (min >= max)
		return (0);
	num = malloc(sizeof(*num) * (max - min));
	if (!num)
		return (NULL);
	while (min < max)
	{
		num[i] = min;
		i++;
		min++;
	}
	return (num);
}
