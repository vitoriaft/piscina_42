/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:56:16 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/22 19:28:44 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i]) >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}
//#include <stdio.h>
/*int     main()
{
        char exemple1[] = "VIVALAVIDA!";

        printf("min: %s\n", exemple1);
        printf("mai: %s\n", ft_strupcase (exemple1));
        return 0;
    
}*/
