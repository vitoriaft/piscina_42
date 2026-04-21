/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:06:13 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/21 12:28:18 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	 i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!(str[i] >= 'a' && str[i] <= 'z'))
		return (0);
		i++;
	}
	return (1);
}
int	main()
{
    char str1[] = "AdfvGFFGdvfgA";
    char str2[] = "ABCDEF";
    char str3[] = " ";
    char str4[] = "abcdefd";
    printf ( "%d\n", ft_str_is_lowercase(str1));
    printf ( "%d\n", ft_str_is_lowercase(str2));
    printf ( "%d\n", ft_str_is_lowercase(str3));
    printf ( "%d\n", ft_str_is_lowercase(str4));


    return 0;
}
