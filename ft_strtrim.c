/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igkalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:00:08 by igkalash          #+#    #+#             */
/*   Updated: 2020/03/04 16:37:30 by igkalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*copy;
	int		len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	len = len - i;
	if (len <= 0)
		len = 0;
	if (!(copy = (char*)ft_memalloc((len + 1))))
		return (NULL);
	ft_strncpy(copy, (char*)s + i, len);
	copy[len] = '\0';
	return (copy);
}
