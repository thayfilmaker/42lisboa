/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:58:46 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/28 22:33:50 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
int x;
// Test 1: String with only Uppercase alphabetic characters
char str1[] = "ALPHA";
x = ft_str_is_printable(str1) + '0';
write (1, &x, 1);
printf (" - ALPHA\n");// Expected output: 1 (alphabetic characters only)

// Test 2: String containing digits and Lowercase Chars
char str2[] = "123abc";
x = ft_str_is_printable(str2) + '0';
write (1, &x, 1);
printf (" - 123abc\n");// Expected output: 0 (contains digits)

// Test 3: String with spaces and punctuation
char str3[] = "$p&cial !";
x = ft_str_is_printable(str3) + '0';
write (1, &x, 1);
printf (" - $p&cial !\n");// Expected output: 0

// Test 4: Empty string (considered alphabetic)
char str4[] = "";
x = ft_str_is_printable(str4) + '0';
write (1, &x, 1);
printf (" - Empty!\n");// Expected output: 1

// Test 5: Non Printable Chars
char str5[] = "¶°¤";
x = ft_str_is_printable(str5) + '0';
write (1, &x, 1);
printf (" - ¶°¤\n");// Expected output: 0

return (0);
}
