/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c	    	       	 				    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;	

	if (!src)
		return (0);
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

// int main(void)
// {
// 	char dst[10];
// 	char *src = "Hello 42";
// 	size_t size;
// 	int	i;

// 	size = 5;
// 	i = ft_strlcpy(dst, src, size);
// 	printf("leng dest = %d\nn", i);
// 	printf("dest = %s", dst);
// }
