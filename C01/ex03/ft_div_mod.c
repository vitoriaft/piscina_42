/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:16:19 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/13 16:50:42 by viteixei         ###   ########.fr       */
/*                                                                            */
/* *************************************************************************** */

#include <stdio.h>

//declaracao da funcao, com void, ou seja nao retorna nada e recebe quatro parametros 
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a  /  b; // faz divisao de a por b e armazena em div 
	*mod = a  %  b; // mostra o resto da
}

int	main(void)
{
	int a = 14;
	int b = 4;

	int	x;
	int	y;
	printf("%d\n", a);
	printf("%d\n", b);

cd .
};
