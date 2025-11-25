/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c	    	       	 				    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d == s || n == 0)
		return (dest);
	i = n;
	if (d > s)
		while (i-- > 0)
			d[i] = s[i];
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int main(void)
// {
// 	char	dest[] = "";
// 	char	src[] = "";
// 	printf("new dest = %s\n", (char *)ft_memmove(dest, src, 0));
// 	// printf("new dest = %s\n", (char *)ft_memmove(dest, dest + 2, 5));
// }
