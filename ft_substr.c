/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c	       	 				 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,	size_t len)
{
	char	*substr;
	size_t	i;
	size_t	len_s;
	size_t	len_sub;

	len_s = 0;
	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	len_sub = len_s - start;
	if (len_sub > len)
		len_sub = len;
	substr = malloc(len_sub + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len_sub)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*substr;
// 	int		start;
// 	size_t	len;

// 	s = "Hello 42";
// 	start = 3;
// 	len = 10;
// 	substr = ft_substr(s, start, len);
// 	printf("p = %s\n", substr);
// 	free(substr);
// }
