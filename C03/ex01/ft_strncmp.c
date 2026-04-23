/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:06:25 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/23 16:46:03 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
//#include <stdio.h>
/*int main(void)
{
    char str1[] = "heeeeeee";
    char str2[] = "teste";
    unsigned int n = 5;

    int result = ft_strncmp(str1, str2, n);

        printf("result %d\n", result);

    return 0;
}*/
