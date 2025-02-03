/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 01:45:43 by thasousa          #+#    #+#             */
/*   Updated: 2025/02/03 01:50:31 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + l] == to_find[l] && str[i + l] != '\0')
			l++;
		if (to_find[l] == '\0')
			return (str + i);
		i++;
		l = 0;
	}
	return (0);
}

// int main()
// {
// char str[] = "SKATE!";
// char to_find[] = "SKATEBOARD";
// char *result = ft_strstr(str, to_find);

// if (result != NULL)
// {
// 	printf("Substring found: %s\n", result);
// }
// 	else
// {
// 	printf("Substring not found.\n");
// }

// return 0;
// }
