/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbonis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:46:24 by gbonis            #+#    #+#             */
/*   Updated: 2023/11/14 14:59:25 by gbonis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		c += 32;
		return (c);
	}
	if (c == -1)
		return (c);
	else
		return (c);
}
/*
int	main(void)
{
	printf("%c", ft_tolower('A'));
	return (0);
}*/
