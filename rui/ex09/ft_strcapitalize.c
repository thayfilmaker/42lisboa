/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:55:35 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/28 22:51:39 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_uppercase(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z'))
				str[i] -= 32;
		}
		i++;
	}
}

void	ft_lowercase(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if ((str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z'))
				str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_uppercase(str);
	ft_lowercase(str);
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	return (str);
}

int main()
{
char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

// Chama a função para capitalizar a string
printf("Resultado: %s\n", ft_strcapitalize(str));

return 0;
}
