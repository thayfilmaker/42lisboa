/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:39:38 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/28 22:25:28 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
int x;
// Test 1: String with only alphabetic characters
char str1[] = "Alpha";
x = ft_str_is_numeric(str1) + '0';
write (1, &x, 1);
printf (" - Alpha\n");// Expected output: 1 (alphabetic characters only)

// Test 2: String containing digits
char str2[] = "123";
x = ft_str_is_numeric(str2) + '0';
write (1, &x, 1);
printf (" - 123\n");// Expected output: 0 (contains digits)

// Test 3: String with spaces and punctuation
char str3[] = "$p&cial !";
x = ft_str_is_numeric(str3) + '0';
write (1, &x, 1);
printf (" - $p&cial !\n");// Expected output: 0

// Test 4: Empty string (considered alphabetic)
char str4[] = "";
x = ft_str_is_numeric(str4) + '0';
write (1, &x, 1);
printf (" - Empty!\n");// Expected output: 1

return 0;
}
