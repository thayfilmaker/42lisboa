/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgribble <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:50:14 by lgribble          #+#    #+#             */
/*   Updated: 2025/02/01 20:20:29 by lgribble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
/*
int main() {
    char src[] = "O Flamengo é F##a!!";
    char dest[] = "Corinthians Lixo!!";
	
	printf("source: %s\n", dest);

    ft_strcat(dest, src);

    printf("Destination: %s\n", dest);
    return 0;
}*/
