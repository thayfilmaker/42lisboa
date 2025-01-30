/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:17:25 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/29 03:57:18 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			j++;
		else if (str[j] >= 'A' && str[j] <= 'Z')
			j++;
		else
			return (0);
	}
	return (1);
}

int	main()
{
	char *str = "a";
	printf("%i\n", ft_str_is_alpha(str));
	return 0;
}