/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:02:21 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/01 20:12:29 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[l] != '\0' && l < nb)
	{
		dest[i + l] = src[l];
		l++;
	}
	dest[i + l] = '\0';
	return (dest);
}

// int main()
// {
//     // Declare and initialize two strings
//     char dest[50] = "Awesome, ";  // Ensure dest has enough space
//     char src[] = "Cheese!";

//     // Concatenate at most 3 characters from src to dest using ft_strncat
//     ft_strncat(dest, src, 3);

//     // Print the resulting string after concatenation
//     printf("Resulting string: %s\n", dest);

//     // Try another example with a larger 'nb' value
//     ft_strncat(dest, src, 7); // Now append 7 characters: "Cheese!"
//     printf("Resulting string: %s\n", dest);

//     return 0;
// }
