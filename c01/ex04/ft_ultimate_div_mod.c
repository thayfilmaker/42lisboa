/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 02:04:06 by thasousa          #+#    #+#             */
/*   Updated: 2025/01/25 02:20:56 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x = 20;
	int	y = 10;

	ft_ultimate_div_mod(&x, &y);

	printf("Div: %i, Mod: %i", x, y);
}
*/
