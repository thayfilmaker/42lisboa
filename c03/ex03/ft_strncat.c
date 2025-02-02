/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgribble <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:13:12 by lgribble          #+#    #+#             */
/*   Updated: 2025/02/01 20:19:14 by lgribble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int m;

	i = 0;
	m = 0;
    while (dest[i] != '\0')
		i++;

    while (src[m] != '\0' && m < nb)
    {
        dest[i + m] = src[m];
		m++;
    }
    dest[i + m] = '\0';
    return (dest);
}

int main() {
    char src[] = "o melhor time do mundo!! ";
    char dest[50] = "flamengo ";

    printf("source: %s\n", dest);

    ft_strncat(dest, src, 8);

    printf("Destination: %s\n", dest);
    return 0;
}
