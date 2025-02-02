/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgribble <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:28:53 by lgribble          #+#    #+#             */
/*   Updated: 2025/02/01 21:43:23 by lgribble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    unsigned int i;
    unsigned int m;

    i = 0;
    m = 0;
    if (to_find[m] == '\0')
		return(str);
	while (str[i] != '\0')
	{
		while (str[i + m] == to_find[m] && str[i + m] !='\0')
			m++;
		if (to_find[m] == '\0')
			return(str + i);
		i++;
		m = 0;
	}
	return (0);
}

int main() {
    char str[] = "Eu sou foda";
    char to_find[] = "sou";
	char *result;

	result = ft_strstr(str, to_find);

      if (result) {
        printf("Substring found: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
