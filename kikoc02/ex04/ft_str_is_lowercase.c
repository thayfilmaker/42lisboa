/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:31:22 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/29 03:58:52 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	j;

	if (str[0] == '\0')
		return (1);
	j = 0;
	while (str[j])
	{
		if (!(str[j] >= 'a' && str[j] <= 'z'))
			return (0);
		j++;
	}
	return (1);
}
 
int	main()
{
	char *str = "fjefa";
	printf("%i\n", ft_str_is_lowercase(str));
	return 0;
}