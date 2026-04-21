/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:46:25 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/21 13:25:08 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
        if (str[i] == '\0')
		return (1);	
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		return (0);
		i++;
	}
	return (1);
}
int	main()
{
    char stra[] = "abcdefgh";
    char strb[] = "ABCDEF";
    char strc[] = "";
    char strd[] = "#@!&&&";
    printf ( "%d\n", ft_str_is_uppercase(stra));
    printf ( "%d\n", ft_str_is_uppercase(strb));
    printf ( "%d\n", ft_str_is_uppercase(strc));
    printf ( "%d\n", ft_str_is_uppercase(strd));

    return 0;
}
