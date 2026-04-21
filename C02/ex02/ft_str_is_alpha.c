/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:46:11 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/21 10:54:16 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int  ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
          return (0);
        str++;
    }
    return (1);
}

int main (void)
{
    char stra[] = "viajando";
    char strb[] = "bem vindo";
    char strc[] = "123456";
    char strd[] = "AbCeFDgd";
    char stre[] = " ";
    char strf[] = "!!!@@@";

    printf ( "%d\n", ft_str_is_alpha (stra));
    printf ( "%d\n", ft_str_is_alpha (strb));
    printf ( "%d\n", ft_str_is_alpha (strc));
    printf ( "%d\n", ft_str_is_alpha (strd));
    printf ( "%d\n", ft_str_is_alpha (stre));
    printf ( "%d\n", ft_str_is_alpha (strf));

    return (0);
}
