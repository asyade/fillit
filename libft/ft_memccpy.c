/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorbeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 20:56:27 by acorbeau          #+#    #+#             */
/*   Updated: 2017/04/18 12:47:52 by acorbeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dptr;
	unsigned char	*sptr;

	dptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	while (n--)
	{
		if ((*dptr++ = *sptr++) == (unsigned char)c)
			return ((void *)dptr);
	}
	return ((void *)NULL);
}
