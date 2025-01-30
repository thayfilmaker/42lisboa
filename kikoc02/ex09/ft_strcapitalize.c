/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:44:11 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/29 04:05:25 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122) && (str[i - 1] == 32))
			str[i] -= 32;
		i ++;
	}
	return (str);
}

int main()
{
	char str[] = "ola, como ce esta ? 42mots quarante-deux; cinquante+et+un";
    printf("Original: %s\n", str);
	ft_strcapitalize(str);
    printf("Uppercase: %s\n", str);
	return 0;
}