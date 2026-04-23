/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:14:04 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/23 15:36:56 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{	
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
//#include <stdio.h>
/*int main(void)
{
    char str1[] = "Olb";  
    char str2[] = "Ola";  
    int resultado;        

    resultado = ft_strcmp(str1, str2);  
    printf("Resultado da comparação: %d\n", resultado);  

    return 0;
}*/
