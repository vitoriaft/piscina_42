/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:13:07 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/14 17:18:53 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	 i; 
	i = 0; 
	
	while (str[i] != '\0')
		i++;
	return (i);
}
#include <stdio.h>
int	main(void)
{
	char str[] = "abcdefghijkl";
	int len;
	len = ft_strlen(str);
	printf("%d\n", len);
}
