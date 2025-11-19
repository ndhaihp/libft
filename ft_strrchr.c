/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c	    	       	 				    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	ch;

	p = (char *)s;
	ch = (char)c;
	i = 0;
	while (p[i])
		i++;
	while (i >= 0 && p[i] != ch)
		i--;
	if (i == -1)
		return (NULL);
	return (&p[i]);
}

// int main(void)
// {
// 	char *s;
// 	char *result;
// 	int	c;

// 	s = "Hello";
// 	c = 364;
// 	result = ft_strrchr(s, c);		
// 	if (result == NULL)
// 		return (printf("Not found"));
// 	return (printf("%s", ft_strrchr(s, c)));
// }
