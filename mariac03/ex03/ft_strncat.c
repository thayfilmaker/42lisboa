/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpupo-co <mpupo-co@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:40:43 by mpupo-co          #+#    #+#             */
/*   Updated: 2025/01/28 21:31:39 by mpupo-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	unsigned int	i;

	size = 0;
	i = 0;
	while (dest[size])
		size++;
	while (i < nb && src[i])
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	s1[20] = "Hello";
	char	s2[20] = "Hello";
	ft_strncat(s1, " 42!", 2);
	ft_strncat(s2, " 42!", 4);
	printf("%s\n%s\n", s1, s2);
	return (0);
}
*/
