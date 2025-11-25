/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c	       	 				 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*p;

// 	s = "Hello 42";
// 	p = strdup(s);

// 	printf("p = %s\n", p);
// 	printf("address of s = %p\n", s);
// 	printf("address of p = %p\n", p);
// 	free(p);
// }
