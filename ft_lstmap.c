/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igkalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:36:04 by igkalash          #+#    #+#             */
/*   Updated: 2020/02/25 15:39:26 by igkalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map_root;
	t_list	*map;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	map_root = 0;
	map = 0;
	while (lst)
	{
		tmp = f(lst);
		(!map) ?
			(map = ft_lstnew(tmp->content, tmp->content_size)) :
			(map->next = ft_lstnew(tmp->content, tmp->content_size));
		free(tmp);
		if (!map_root)
			map_root = map;
		if (!map)
			return (map_root);
		else if (map->next)
			map = map->next;
		lst = lst->next;
	}
	return (map_root);
}
