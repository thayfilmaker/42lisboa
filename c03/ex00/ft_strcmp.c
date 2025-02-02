/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgribble <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:53:39 by lgribble          #+#    #+#             */
/*   Updated: 2025/02/01 18:34:02 by lgribble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;

	return(s1[i] - s2[i]);
}
/*
int main()
{
	char *str1 = "fla";
	char *str2 = "mengo";
	char *str3 = "fla";
	char *str4 = "Fla";
	char *str5 = "flam";

	int result1 = ft_strcmp(str1, str2);
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, result1);
    // Expected to be negative

    int result2 = ft_strcmp(str1, str3);
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str3, result2);
    // Expected to be 0

    int result3 = ft_strcmp(str1, str4);
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str4, result3);
    // Expected to be positive

    int result4 = ft_strcmp(str1, str5);
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str5, result4);
    // Expected to be negative

    return 0;
}*/
