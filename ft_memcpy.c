/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igkalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:51:10 by igkalash          #+#    #+#             */
/*   Updated: 2020/02/27 18:33:42 by igkalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;

	ptr = dst;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*ptr = *((unsigned char *)src);
		ptr++;
		src++;
		n--;
	}
	return (dst);
}
