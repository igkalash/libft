/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igkalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:35:41 by igkalash          #+#    #+#             */
/*   Updated: 2020/02/25 19:36:28 by igkalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		src_len;
	int		i;

	i = 0;
	src_len = ft_strlen(src);
	while (i <= src_len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
