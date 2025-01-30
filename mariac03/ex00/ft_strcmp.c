/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 21:18:58 by mpupo-co          #+#    #+#             */
/*   Updated: 2025/01/29 20:03:57 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] - s2[i] == 0)
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

#include <stdio.h>

int	main ()
{
	char	s1[] = "zfr";
	char	s2[] = "gfg";
	
	int 	res1 = ft_strcmp(s1, s2);
	int	res2 = ft_strcmp(s2, s1);
	int	res3 = ft_strcmp(s1, s1);
	
	printf("%d\n%d\n%d\n", res1, res2, res3);
	return (0);
}

