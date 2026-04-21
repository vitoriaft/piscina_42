/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:03:13 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/21 11:03:59 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    while(*str && (*str >= '0' && *str <= '9'))
      str++;
    return (!(*str));

}

int main(void)
{
    char stra[] = "1234";
    char strb[] = "123a223rg4";

    printf ( "%d\n", ft_str_is_numeric(stra));
    printf ( "%d\n", ft_str_is_numeric(strb));

    return 0;
}
