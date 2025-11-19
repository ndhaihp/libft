/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c	    			       	 				    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	toupper(unsigned	int i, char c)
{		
	
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (s);
}


int	main(void)
{
	char const	*s;
	unsigned	i;
	char		*result;

	s ="Hello 42";

	result = ft_strmapi(s, &toupper)

}
