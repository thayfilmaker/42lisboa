/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:09:13 by thasousa          #+#    #+#             */
/*   Updated: 2025/01/27 16:20:27 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>
int main()
{
	int	x = 5;
	int	y = 3;

	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}*/
