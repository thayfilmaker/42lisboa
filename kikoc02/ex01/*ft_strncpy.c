/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_strncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:00:08 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/29 03:50:59 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

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

int	main()
{
	char src[] = "ban";
	char dest[] = "ananas";
	char dest1[] = "cerejas e milho";

	printf("%s", ft_strncpy(dest, src, 3));
	printf("\n%s", ft_strncpy(dest1, src, 3));
	printf("\n%s", ft_strncpy(dest, src, 5));
	printf("\n%s", ft_strncpy(dest1, src, 5));
	printf("\n%s", ft_strncpy(dest, src, 20));
	printf("\n%s", ft_strncpy(dest1, src, 20));
}