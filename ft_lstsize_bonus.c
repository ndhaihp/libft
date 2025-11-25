/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c	      	 			 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lst_size;

	lst_size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		lst_size++;
	}
	return (lst_size);
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
