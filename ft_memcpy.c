/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c	    	       	 				    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_ptr;
	char	*src_ptr;

	i = 0;
	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	// char	dest[] = "abcdef";
// 	char	src[] = "abcdef";	
// 	// printf("new dest = %s\n", (char *)ft_memcpy(dest, dest + 2, 4));
// 	printf("new dest = %s\n", (char *)ft_memcpy(src + 2, src, 4));
// }