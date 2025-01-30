/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:49:50 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/28 22:07:58 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int main()
{
char src[] = "Buenas!";
char dest[50];  // Dest must have enough space to store the intended string

// Function that copies the information from src to dest
ft_strcpy(dest, src);

// prints the copied string
printf("String copiada: %s\n", dest);

return 0;
}
