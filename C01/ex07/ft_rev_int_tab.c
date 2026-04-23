/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:40:52 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/17 17:59:48 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (tab[i] <= size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*int	main(void)
{
	int	size = 8;
	int	i;
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8};
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size )
	{
		printf("%d", tab[i]);
		printf(" ");
		i++;
	}
}*/
