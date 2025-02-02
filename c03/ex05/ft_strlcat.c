/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgribble <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 01:17:27 by lgribble          #+#    #+#             */
/*   Updated: 2025/02/02 01:30:01 by lgribble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    l;
    unsigned int    dest_len;
    unsigned int    src_len;

    i = 0;
    l = 0;
    while (dest[l] != '\0')
    {
        l++;
    }
    dest_len = l;
    src_len = ft_strlen(src);
    if (size == 0 || size <= dest_len)
        return (src_len + size);
    while (src [i] != '\0' && i < size - dest_len - 1)
    {
        dest[l] = src[i];
        i++;
        l++;
    }
    dest[l] = '\0';
    return (dest_len + src_len);
}
/*
int main (void)
{
    char src[] = "a Mariana";
    char dest [] = "Leve ";
    printf("%i \n", ft_strlcat(dest, src, 16));
    printf("%s \n", dest);
}*/
