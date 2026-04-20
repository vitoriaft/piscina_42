/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <viteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 12:44:02 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/20 13:26:46 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{	
	int	i;
	
	i = 0; 
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;	
}

/*int	main(void)
{
	char origin[] = "jfifhifewfwe";
	char dest[] = "aaaaaaaaaaaaaaa";
	printf("Origem : %s\n", dest);
	ft_strcpy(dest, origin);
	printf("Destino: %s", dest);
}*/
