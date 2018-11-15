/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:40:56 by pthan             #+#    #+#             */
/*   Updated: 2018/11/06 20:30:38 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}

char	*ft_strdup(char *src)
{
	int		n;
	char	*str;

	n = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (n + 1));
	while (*src)
	{
		*str = *src;
		str++;
		src++;
	}
	*str = '\0';
	return (str - n);
}
