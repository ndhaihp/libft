/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c	    	       	 				    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	char	ch;
	size_t	i;

	p = (char *)s;
	ch = (unsigned char)c;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (p[i] == ch)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*p;
// 	char	*result;
// 	int		c;
// 	size_t	n;
// 	p = "Hello";
// 	c = 'l';
// 	n = 2;
// 	result = ft_memchr(p, c, n);
// 	printf("%s", result);
// }
