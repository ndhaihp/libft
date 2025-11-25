/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c  	   	 			 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
//     t_list *list;
// 	t_list *last_node;
// 	t_list *new;

//     list = NULL;
// 	ft_lstadd_front(&list, ft_lstnew("school"));
//     ft_lstadd_front(&list, ft_lstnew("42"));
//     ft_lstadd_front(&list, ft_lstnew("Hello"));
// 	ft_lstadd_back(&list, ft_lstnew("of Prague"));	
// 	while (list)
// 	{
// 		printf("%s\n", (char *)list->content);
// 		list = list->next;
// 	}
//     return (0);
// }