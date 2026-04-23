/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:03:13 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/22 17:54:01 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (*str && (*str >= '0' && *str <= '9'))
	str++;
	return (!(*str));
}
//#include <stdio.h>
/*int main(void)
{
    char stra[] = "1234";
    char strb[] = "123a223rg4";
    char strc[] = "";

    printf ( "%d\n", ft_str_is_numeric(stra));
    printf ( "%d\n", ft_str_is_numeric(strb));
    printf ( "%d\n", ft_str_is_numeric(strc));

    return 0;
}*/
