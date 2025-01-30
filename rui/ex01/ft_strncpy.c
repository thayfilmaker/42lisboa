/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:22:58 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/29 02:27:23 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// Copy the first 5 characters from src to dest
ft_strncpy(dest, src, 7);

// Print the destination string
printf("Destination string: %s\n", dest);

// Now let's test with n greater than the length of src
ft_strncpy(dest, src, 15);
printf("Destination string after copy with n=15: %s\n", dest);

return 0;