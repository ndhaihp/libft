/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c	 			 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
//     t_list *list = NULL;

//     ft_lstadd_front(&list, ft_lstnew("world"));
//     ft_lstadd_front(&list, ft_lstnew("beautiful"));
//     ft_lstadd_front(&list, ft_lstnew("hello"));

//     while (lst)
//     {
//         printf("%s\n", (char *)lst->content);
//         lst = lst->next;
//     }

//     return 0;
// }
