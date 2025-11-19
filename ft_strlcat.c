/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c	    	       	 				    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_dst = 0;
	len_src = 0;
	while (len_dst < size && dst[len_dst])
		len_dst++;
	while (src[len_src])
		len_src++;
	if (len_dst == size)
		return (size + len_src);
	i = 0;
	while ((i < size - len_dst - 1) && src[i])
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

// int main(void)
// {
// 	char dst[10] = "Hello";
// 	char *src = " 42";
// 	size_t size;
// 	int	i;

// 	size = 8;
// 	i = ft_strlcat(dst, src, size);
// 	printf("leng dest = %d\n", i);
// 	printf("dest = %s", dst);
// }
