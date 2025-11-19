/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c	    	       	 				    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	size_t	n;

// 	s1 = "Hello";
// 	s2 = "Helko";
// 	n = 4;
// 	printf("%d", strncmp(s1, s2 ,n));
// 	return (0);
// }
