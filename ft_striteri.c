/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c	       	 				 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainguye <dainguye@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:57:58 by dainguye          #+#    #+#             */
/*   Updated: 2025/11/11 10:57:58 by dainguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;	

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	new_toupper(unsigned	int i, char *s)
// {	
// 	if (s[i] >= 97 && s[i] <= 122)
// 		s[i] -= 32;	
// }
// int	main(void)
// {
// 	char s[] = "Hello 42";	
// 	ft_striteri(s, &new_toupper);
// 	printf("%s", s);	
// 	return (0);
// }
