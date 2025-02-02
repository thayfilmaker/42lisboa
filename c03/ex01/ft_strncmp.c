/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgribble <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:04:16 by lgribble          #+#    #+#             */
/*   Updated: 2025/02/01 18:36:11 by lgribble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > i)
	{
		if(s1[i] > s2[i])
		{
			return(1);
		}
		else if(s1[i] < s2[i])
		{
			return(-1);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char *str1 = "fla";
	char *str2 = "mengo";
	char *str3 = "fla";
	char *str4 = "Fla";
	char *str5 = "flam";

	unsigned int result1 = ft_strncmp(str1, str2, 10);
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, result1);
    // Expected to be negative

	unsigned int result2 = ft_strncmp(str1, str3, 10);
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str3, result2);
    // Expected to be 0

	unsigned int result3 = ft_strncmp(str1, str4, 10);
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str4, result3);
    // Expected to be positive

	unsigned int result4 = ft_strncmp(str1, str5, 10);
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str5, result4);
    // Expected to be negative

    return 0;
}*/
