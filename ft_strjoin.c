/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c	       	 				 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len_s1;
	size_t	len_s2;	

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = malloc(len_s1 + len_s2 + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	ft_strlcat(result, s1, len_s1 + len_s2 + 1);
	ft_strlcat(result, s2, len_s1 + len_s2 + 1);
	return (result);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "Hello ";
// 	s2 = "42";
// 	printf("%s", ft_strjoin(s1, s2));
// 	return (0);
// }
