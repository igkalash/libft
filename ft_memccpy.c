/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igkalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:36:26 by igkalash          #+#    #+#             */
/*   Updated: 2020/03/04 15:26:40 by igkalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*access_src;
	unsigned char	*edit_dst;
	unsigned char	character;

	i = 0;
	edit_dst = (unsigned char *)dst;
	access_src = (unsigned char *)src;
	character = (unsigned char)c;
	while (i < n)
	{
		*edit_dst = access_src[i];
		edit_dst++;
		if (character == access_src[i])
		{
			return (edit_dst);
		}
		i++;
	}
	return (NULL);
}
