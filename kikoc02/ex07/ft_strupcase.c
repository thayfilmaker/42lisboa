/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 20:41:50 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/29 04:03:10 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (str[j] >= 97 && str[j] <= 122)
			str[j] -= 32;
		j++;
	}
	return (str);
}
 
int main()
{
	char str[] = "Hello World!";
    printf("Original: %s\n", str);
    printf("Uppercase: %s\n", ft_strupcase(str));
	return 0;
}