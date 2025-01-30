/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 00:48:35 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/29 01:28:29 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
/*
int	ft_char_is_printable(char c)
{
	if (c >= 32 & c <= 126)
		return (1);
	else
		return (0);
}*/
