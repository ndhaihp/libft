/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c	       	 					 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	len_nbr(int n)
{
	size_t	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static	char	*size_str(int n, size_t *len)
{
	char	*str;	

	if (n == 0)
		*len = 1;
	else
		*len = len_nbr(n);
	if (n >= 0)
	{
		str = malloc(*len + 1);
		if (!str)
			return (NULL);
		str[*len] = '\0';
	}
	if (n < 0)
	{
		str = malloc(*len + 2);
		if (!str)
			return (NULL);
		str[0] = '-';
		str[*len + 1] = '\0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;	
	size_t	len;

	str = size_str(n, &len);
	if (!str)
		return (NULL);
	while (len > 0)
	{
		if (n < 0)
			str[len] = -(n % 10) + '0';
		else
			str[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
// int	main(void)
// {
// 	char *str;
// 	int	n;
// 	n = 0;
// 	// n = -2147483648;
// 	// n = 2147483647;
// 	str = ft_itoa(n);
// 	printf("%s", str);
// 	free(str);
// 	return (0);
// }