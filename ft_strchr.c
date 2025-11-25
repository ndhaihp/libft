/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c	    	       	 				    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	char	ch;

	p = (char *)s;
	ch = (char)c;
	while (*p && *p != ch)
		p++;
	if (ch != '\0' && *p == '\0')
		return (NULL);
	return (p);
}

// int main(void)
// {
// 	char *s;

// 	s = "Hello";	
// 	printf("%s", ft_strchr(s, -364));
// 	return (0);
// }
