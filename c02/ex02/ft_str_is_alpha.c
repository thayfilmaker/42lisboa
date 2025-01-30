/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 02:43:39 by thasousa          #+#    #+#             */
/*   Updated: 2025/01/29 03:34:04 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/*
int main()
{
	int x;

	char str1[] = "Thay";
	x = ft_str_is_alpha(str1) + '0';
	write (1, &x, 1);
	printf (" - Thay\n");

	char str2[] = "789";
	x = ft_str_is_alpha(str2) + '0';
	write (1, &x, 1);
	printf (" - 789\n");

	char str3[] = "$uce$$ !";
	x = ft_str_is_alpha(str3) + '0';
	write (1, &x, 1);

	char str4[] = "";
	x = ft_str_is_alpha(str4) + '0';
	write (1, &x, 1);
	printf (" - Empty!\n");

	return 0;
}*/
