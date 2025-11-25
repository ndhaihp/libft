/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c	   	 			 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// static void del(void *content)
// {
// 	free(content);
// }
// int main(void)
// {
//     t_list *list;	
// 	t_list *tmp;
//     list = NULL;
// 	ft_lstadd_front(&list, ft_lstnew(ft_strdup("school")));
//     ft_lstadd_front(&list, ft_lstnew(ft_strdup("42")));
//     ft_lstadd_front(&list, ft_lstnew(ft_strdup("Hello")));
// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup("of Prague")));		
// 	tmp = list->next;
// 	ft_lstdelone(list, del);
// 	list = tmp;
// 	while (list)
// 	{
// 		printf("%s\n", (char *)list->content);
// 		list = list->next;
// 	}
//     return (0);
// }
