/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:57:17 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/29 04:01:58 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	j;

	if (str[0] == '\0')
		return (1);
	j = 0;
	while (str[j])
	{
		if (!(str[j] >= 32 && str[j] <= 126))
			return (0);
		j++;
	}
	return (1);
}
int	main()
{
	char *str = "-:dasgr3AS Fw\n";
	printf("%i\n", ft_str_is_printable(str));
}