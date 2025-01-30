/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:35:52 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/29 04:03:46 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (str[j] >= 65 && str[j] <= 90)
			str[j] += 32;
		j++;
	}
	return (str);
}
int main()
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ!";
    printf("Original: %s\n", str);
    printf("Uppercase: %s\n", ft_strlowcase(str));
	return 0;
}