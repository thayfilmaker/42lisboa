/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:12:38 by thasousa          #+#    #+#             */
/*   Updated: 2025/01/27 13:40:09 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
		i++;
	return (i);
}

/*int main()
{
	char str[] = "Avanti Palestra!";
		int length = ft_strlen(str);
	printf("O comprimento da string \"%s\" é: %d\n", str, length);
	return 0;
}*/
