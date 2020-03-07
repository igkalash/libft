/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igkalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:16:28 by igkalash          #+#    #+#             */
/*   Updated: 2020/02/25 14:16:30 by igkalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (0);
	if (!content)
	{
		lst->content = 0;
		lst->content_size = 0;
		lst->next = 0;
		return (lst);
	}
	lst->content = malloc(content_size);
	if (!lst->content)
	{
		free(lst);
		return (0);
	}
	ft_memcpy(lst->content, content, content_size);
	lst->content_size = content_size;
	lst->next = 0;
	return (lst);
}
