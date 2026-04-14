 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:03:09 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/14 12:36:49 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}
int	main(void)
{
	int a = 14;
	int b = 4;

	printf("%d\n", a);
	printf("%d\n", b);

	ft_ultimate_div_mod(&a, &b);
 	printf("%d\n", a);
	printf("%d\n", b);
}
