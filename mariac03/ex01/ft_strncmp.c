/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:46:17 by mpupo-co          #+#    #+#             */
/*   Updated: 2025/01/29 20:05:01 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

#include <stdio.h>

int	main ()
{
	char	s1[] = "ABCD";
	char	s2[] = "ABCE";

	int	res1 = ft_strncmp(s1, s2, 3);
	int	res2 = ft_strncmp(s1, s2, 4);
	int	res3 = ft_strncmp(s2, s1, 4);
	
	printf("%d\n%d\n%d\n", res1, res2, res3);
	return(0);
}
