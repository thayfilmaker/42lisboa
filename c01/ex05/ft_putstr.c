/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:13:36 by thasousa          #+#    #+#             */
/*   Updated: 2025/01/27 13:08:42 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		write(1, &str[i++], 1);
	}
}

/*int main()
{
	char str [] =	"Magico Sporting!";
	ft_putstr(str);
	return 0;
}*/
