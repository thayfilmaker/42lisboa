/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:05:27 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/01 19:36:49 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

// int main ()
// {
// 	char	str[] = "Chama!";
// 	char	str1[] = "Chama o Chimichurri!";
// 	unsigned int	result;

// 	result = ft_strncmp(str, str1, 6);
// 	printf ("%d\n", result);

// 	result = ft_strncmp(str1, str, 10);
// 	printf ("%d\n", result);

// 	result = ft_strncmp(str, str, 20);
// 	printf ("%d\n", result);

// 	return(0);
// }
