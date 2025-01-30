/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:01:02 by mlucena-          #+#    #+#             */
/*   Updated: 2025/01/29 19:32:54 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int x;
	
	i = 0;
	while( i < n && s1[i] == s2[i] && s1[i] != '\0' )
	{
		i++;
	}
	if(s1[i] == s2[i] && i < n)
		return(0);
	else 
	{
		x = s1[i] - s2[i];
		return(x);
	}
}

#include <stdio.h>
int main()
{	
	char s1[] = "olaxxxx";
	char s2[] = "olax";
	
	printf("%d", ft_strncmp(s1, s2, 5));
}