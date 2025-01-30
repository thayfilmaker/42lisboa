/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:23:17 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/28 22:41:15 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int main()
{
// Initialize a string with mixed case
char str[] = "ChiMi, @huRRi4!";

// Print the original string
printf("Original string: %s\n", str);

// Call ft_strlowcase to convert all lowercase letters to uppercase
ft_strlowcase(str);

// Print the modified string after converting to uppercase
printf("Modified string: %s\n", str);

return 0;
}
