/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:34:47 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/23 16:50:37 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return (str);
	while (*(str + i) != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
//#include <stdio.h>
/*int main(void)
{
    char str[] = "Hello, World!";
    char to_find[] = "World";
    char *result = ft_strstr(str, to_find);

    printf("Resultado: %s\n", result);

    return 0;
}*/
