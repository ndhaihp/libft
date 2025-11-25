/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c	  	 			 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void to_upper(void *content)
// {
//     char *s = content;
//     while (*s)
//     {
//         *s = ft_toupper(*s);
//         s++;
//     }
// }
// int main(void)
// {
//     t_list *list;	
//     list = NULL;
// 	ft_lstadd_front(&list, ft_lstnew(ft_strdup("school")));
//     ft_lstadd_front(&list, ft_lstnew(ft_strdup("42")));
//     ft_lstadd_front(&list, ft_lstnew(ft_strdup("Hello")));
// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup("of Prague")));		
// 	ft_lstiter(list, to_upper);		
// 	while (list)
// 	{
// 		printf("%s\n", (char *)list->content);
// 		list = list->next;
// 	}
//     return (0);
// }
