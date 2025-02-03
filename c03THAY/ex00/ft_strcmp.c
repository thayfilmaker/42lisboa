/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:36:43 by thasousa          #+#    #+#             */
/*   Updated: 2025/02/02 23:22:18 by thasousa         ###   ########.fr       */
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
/*
int main()
{
	char s1[] = "SKATE";
	char s2[] = "SKAT&";

	ft_strcmp(s1, s2);

	printf ("%d\n", ft_strcmp(s1, s2));
}*/
