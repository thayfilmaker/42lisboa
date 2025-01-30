/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:23:48 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/29 03:58:10 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	j;

	if (str[0] == '\0')
		return (1);
	j = 0;
	while (str[j])
	{
		if (!(str[j] >= '0' && str[j] <= '9'))
			return (0);
		j++;
	}
	return (1);
}

int	main()
{
	char *str = " ";
	printf("%i\n", ft_str_is_numeric(str));
	return 0;
}