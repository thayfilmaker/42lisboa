/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:29:23 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/01 17:24:59 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
//     // Declare and initialize two strings
//     char dest[50] = "Awesome, ";  // Make sure dest is large enough
//     char src[] = "Cheese!";

//     // Concatenate src to dest using ft_strcat
//     ft_strcat(dest, src);

//     // Print the result
//     printf("Resulting string: %s\n", dest);

//     return 0;
// }
