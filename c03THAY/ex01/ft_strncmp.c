/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:22:04 by thasousa          #+#    #+#             */
/*   Updated: 2025/02/02 23:35:16 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' && s2[i] != '0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (i > n && s1[i] == s2[i])
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main ()
{
	char	s1[] = "SKATE";
	char	s2[] = "SKATEBOARD";
	unsigned int	result;

	result = ft_strncmp(s1, s2, 6);
	printf ("%d\n", result);

	return(0);
}*/
