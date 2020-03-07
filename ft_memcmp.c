/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igkalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 19:51:00 by igkalash          #+#    #+#             */
/*   Updated: 2020/02/24 19:52:18 by igkalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c_s1;
	const unsigned char	*c_s2;

	c_s1 = s1;
	c_s2 = s2;
	while ((int)n > 0)
	{
		if (*c_s1 != *c_s2)
			return ((*c_s1) - (*c_s2));
		c_s1++;
		c_s2++;
		n--;
	}
	return (0);
}
