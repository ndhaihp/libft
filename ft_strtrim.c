/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c	       	 				 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*right_trim(char *s1_cpy, char *set, size_t len_s1)
{
	size_t	i;
	size_t	j;

	i = len_s1;
	while (i > 0)
	{
		j = 0;
		while (set[j] && set[j] != s1_cpy[i - 1])
			j++;
		if (set[j] == '\0')
			return (s1_cpy);
		s1_cpy[i - 1] = '\0';
		i--;
	}
	return (s1_cpy);
}

static	char	*left_trim(char *s1_cpy, char *set, size_t len_s1)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len_s1)
	{
		j = 0;
		while (set[j] && set[j] != s1_cpy[i])
			j++;
		if (set[j] == '\0')
			return (right_trim(s1_cpy, set, len_s1));
		s1_cpy[i] = '\0';
		i++;
	}
	return (s1_cpy);
}

static	char	*ft_strtrim_result(char *s1_cpy, size_t len_s1, size_t len_trim)
{
	char	*result;
	size_t	i;
	size_t	j;

	result = malloc(len_s1 - len_trim + 1);
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len_s1)
	{
		if (s1_cpy[i] != '\0')
		{
			result[j] = s1_cpy[i];
			j++;
		}
		i++;
	}
	result[j] = '\0';
	return (result);
}

static	char	*check_null(char const *s1, char const *set)
{
	char	*s1_cpy;

	if (!s1 || !set)
		return (NULL);
	s1_cpy = ft_strdup(s1);
	if (!s1_cpy)
		return (NULL);
	return (s1_cpy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_cpy;
	char	*result;
	size_t	len_trim;
	size_t	len_s1;
	size_t	i;

	s1_cpy = check_null(s1, set);
	if (!s1_cpy)
		return (NULL);
	len_s1 = ft_strlen(s1);
	s1_cpy = left_trim(s1_cpy, (char *)set, len_s1);
	if (ft_strlen(s1_cpy) == len_s1)
		return (s1_cpy);
	i = 0;
	len_trim = 0;
	while (i < len_s1)
	{
		if (s1_cpy[i] == '\0')
			len_trim++;
		i++;
	}
	result = ft_strtrim_result(s1_cpy, len_s1, len_trim);
	free(s1_cpy);
	return (result);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*set;
// 	char	*result;
// 	s1 = "ba1a2a3ba";
// 	// s1 = NULL;
// 	s1 = "xxxx42xxx";
// 	// set = "ba";
// 	// set = NULL;
// 	set = "x";
// 	result = ft_strtrim(s1, set);
// 	printf("%s", result);
// 	free(result);
// 	return (0);
// }