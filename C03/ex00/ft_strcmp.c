/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:59:54 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/01 19:37:30 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0')))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	char	str[] = "Delta";
// 	char	str1[] = "Chama!";

// 	ft_strcmp(str, str1);

// 	printf ("%d\n", ft_strcmp(str, str1));
// }
