/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:49:18 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/28 22:27:29 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
int x;
// Test 1: String with only lowercase alphabetic characters
char str1[] = "alpha";
x = ft_str_is_lowercase(str1) + '0';
write (1, &x, 1);
printf (" - alpha\n");// Expected output: 1 (alphabetic characters only)

// Test 2: String containing digits and Uppercase Chars
char str2[] = "123ABC";
x = ft_str_is_lowercase(str2) + '0';
write (1, &x, 1);
printf (" - 123ABC\n");// Expected output: 0 (contains digits)

// Test 3: String with spaces and punctuation
char str3[] = "$p&cial !";
x = ft_str_is_lowercase(str3) + '0';
write (1, &x, 1);
printf (" - $p&cial !\n");// Expected output: 0

// Test 4: Empty string (considered alphabetic)
	char str4[] = "";
x = ft_str_is_lowercase(str4) + '0';
write (1, &x, 1);
printf (" - Empty!\n");// Expected output: 1

return (0);
}
