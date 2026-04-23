/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <viteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:40:30 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/22 20:31:49 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i]) >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}

/*
int     main()
{
	char exemple[] = "vivalavida!";

	printf("min: %s\n", exemple);
	printf("mai: %s\n", ft_strupcase (exemple));
	return 0;	
}
*/