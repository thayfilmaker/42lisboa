/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:37:01 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/29 03:59:26 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	j;

	if (str[0] == '\0')
		return (1);
	j = 0;
	while (str[j])
	{
		if (!(str[j] >= 65 && str[j] <= 90))
			return (0);
		j++;
	}
	return (1);
}

int	main()
{
	char *str = "AFEFES";
	printf("%i\n", ft_str_is_uppercase(str));
	return 0;
}