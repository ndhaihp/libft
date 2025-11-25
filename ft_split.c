/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c	       	 					 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_elements(char const *s, char c)
{
	size_t	qty;
	size_t	new_element;
	size_t	i;

	i = 0;
	qty = 0;
	new_element = 1;
	while (s[i])
	{
		if (s[i] == c)
			new_element = 1;
		else
		{
			if (new_element == 1)
				qty++;
			new_element = 0;
		}
		i++;
	}
	return (qty);
}

static char	*get_elements(char const *s, char c, size_t *len_element)
{
	char	*element;

	*len_element = 0;
	while (s[*len_element] && s[*len_element] != c)
		(*len_element)++;
	element = malloc(*len_element + 1);
	if (!element)
		return (NULL);
	ft_memcpy(element, s, *len_element);
	element[*len_element] = '\0';
	return (element);
}

static	void	free_all(char **result, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
		free(result[j++]);
	free(result);
}

static char	**result_split(char **result, char const *s, char c)
{
	size_t	i;	
	size_t	len_element;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			result[i] = get_elements(s, c, &len_element);
			if (!result[i])
			{
				free_all(result, i);
				return (NULL);
			}
			s += len_element;
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((count_elements(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = result_split(result, s, c);
	return (result);
}

// int	main(void)
// {
// 	char	*s;
// 	char	c;
// 	char	**result;
// 	size_t	i;
// 	size_t	j;
// 	i = 0;
// 	j = 0;
// 	s = "hello 42 school";
// 	c = ' ';
// 	result = ft_split(s, c);
// 	if (!result)
// 		return (0);
// 	while (result[i])
// 	{
// 		printf("%s, ", result[i]);
// 		i++;
// 	}
// 	while (j < i)
// 	{
// 		free(result[j]);
// 		j++;
// 	}
// 	free(result);
// 	return (0);
// }