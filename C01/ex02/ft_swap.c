/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 10:55:34 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/13 14:11:33 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//biblioteca 
#include <stdio.h>

//declaracao da funcao que recebe dois ponteiros para int 
void	ft_swap(int *a, int *b)
{
	//temp- variavel temporaria para fazer a troca de valores 	
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	//declaro duas variavel int e atribuo o valor para elas
	int a = 12;
	int b = 45;
	// imprimir valores de a e b 
	printf("%d\n", a);
	printf("%d\n", b);

	// a e b como argumento, & para pegar o endereco da variavel
	ft_swap( &a, &b);

	//imprimo a funcao com os valores trocados
	printf("%d\n", a);
	printf("%d\n", b);
	
}
