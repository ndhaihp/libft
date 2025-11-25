/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c	       	 				 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned	int, char))
{
	unsigned int	i;
	size_t			len_s;
	char			*result;

	i = 0;
	len_s = ft_strlen(s);
	result = malloc(len_s + 1);
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
// char	new_toupper(unsigned	int i, char c)
// {		
// 	if (i % 2 == 1)
// 		if (c >= 97 && c <= 122)
// 			return (c - 32);
// 	return (c);
// }
// int	main(void)
// {
// 	char const	*s;	
// 	char		*result;
// 	s = "Hello 42";
// 	result = ft_strmapi(s, &new_toupper);
// 	printf("%s", result);
// 	free(result);
// 	return (0);
// }