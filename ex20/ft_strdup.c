/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:57:00 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/09 18:01:32 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*dup;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dup = (char*)malloc(sizeof(*str) * (i + 1));
	if (!dup)
		return (NULL);
	str = dup;
	while (*src)
	{
		*str++ = *src++;
	}
	*str = '\0';
	return (dup);
}
