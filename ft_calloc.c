/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c	       	 				 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	size_t	i;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

// int	main(void)
// {

// 	size_t	nmemb;
// 	size_t	size;
// 	size_t	i;
// 	int		*p;
// 	char *str;

// 	i = 0;
// 	nmemb = 5;
// 	size = sizeof(int);
// 	p = ft_calloc(nmemb, size);
// 	str = (char *)p;
// 	while (i < nmemb * size)
// 	{
// 		printf("%d ", str[i]);
// 		i++;
// 	}
// 	free(p);
// }
