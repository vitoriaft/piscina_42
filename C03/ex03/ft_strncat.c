/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:31:49 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/23 16:49:52 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
//#include <stdio.h>

/*int main(void)
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    unsigned int nb = 3;

    ft_strncat(dest, src, nb);

    printf("Result: %s\n", dest);

    return 0;
}*/
