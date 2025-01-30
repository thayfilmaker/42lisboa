/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:24:26 by thasousa          #+#    #+#             */
/*   Updated: 2025/01/28 23:36:06 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int main()
{
	int a = 15;
	int b = 10;
	int x;
	int y;

	ft_div_mod(a, b, &x, &y);
	printf("%d\n", x);
	printf("%d", y);
}*/
