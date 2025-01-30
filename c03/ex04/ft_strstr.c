/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:21:29 by mlucena-          #+#    #+#             */
/*   Updated: 2025/01/30 17:07:48 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*procura uma substring dentro de uma string se nao encontrar retorna nulo*/
/**/

#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int	x;
	int i;

	i = 0;
	x = 0;
	if(str[i] == to_find[x])
	{
		x++;
		/*maybe i++here too*/
	}
	i++;
	return(str[i]);
}

int main()
{
	char str[] = "ola meu nome e mariana lins";
	char to_find[] = "mariana";

	printf("%s", ft_strstr(str, to_find));
}