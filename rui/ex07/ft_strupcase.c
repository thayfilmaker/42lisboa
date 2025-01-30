/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:47:43 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/28 22:39:02 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int main()
{
// Initialize a string with mixed case
char str[] = "Chimi, @hurri4!";

// Print the original string
printf("Original string: %s\n", str);

// Call ft_strupcase to convert all lowercase letters to uppercase
ft_strupcase(str);

// Print the modified string after converting to uppercase
printf("Modified string: %s\n", str);

return 0;
}
