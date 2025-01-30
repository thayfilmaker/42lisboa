/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 01:18:40 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/28 23:00:49 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[2];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else if (!(str[i] >= 32 && str[i] <= 126))
		{
			write (1, "\\", 2);
			hex[0] = "0123456789abcdef"[(str[i] / 16)];
			hex[1] = "0123456789abcdef"[(str[i] % 16)];
			write (1, hex, 2);
		}
		i++;
	}
}

int main()
{
    // Testing the function with non printable chars
    char str[] = "Chimi\nxurri\n";
    ft_putstr_non_printable(str);  // Expected output: Hello\x09World\x0A
    return 0;
}
