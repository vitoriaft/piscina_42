/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:30:59 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/22 19:01:03 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	if (!(*str))
		return (1);
	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
			return (0);
		str++;
	}
	return (1);
}
//#include <stdio.h>
/*int     main()
{
    char stra[] = "viva\nla\nvida";
    char strb[] = "vivalavida";

    printf ( "%d\n", ft_str_is_printable(stra));
    printf ( "%d\n", ft_str_is_printable(strb));

    return 0;
}*/
