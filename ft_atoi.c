/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c    	       	 				 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		result;
	int		sign;
	int		count_sign;	

	sign = 1;
	count_sign = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	while (*nptr == '-' || *nptr == '+')
	{
		count_sign++;
		if (count_sign > 1)
			return (0);
		if (*nptr == '-')
			sign = -sign;
		nptr++;
	}
	result = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = (*nptr - '0') + result * 10;
		nptr++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	char	*p;
// 	p = "  -0123vxcv";
// 	printf("result = %d", atoi(p));
// }
