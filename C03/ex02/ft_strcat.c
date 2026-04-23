/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:26:47 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/23 16:46:57 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
//#include <stdio.h>

/*char *ft_strcat(char *dest, char *src);

int main(void)
{
    char dest[50] = "Hello, ";
    char src[] = "world!";

    ft_strcat(dest, src);

    printf("Result: %s\n", dest);

    return 0;
}*/
